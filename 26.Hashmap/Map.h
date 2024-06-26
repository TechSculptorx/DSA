#include <iostream>
#include <string>
using namespace std;

template <typename V>

class MapNode {
    public:
        string key;
        V value;
        MapNode *next;

        MapNode(string key, V value) {
            this->key = key;
            this->value = value;
            next = NULL;
        }

        ~MapNode() {
            delete next;
        }
};

template <typename V>

class Map {
    MapNode<V> **buckets;
    int count;
    int numberBuckets;

    private:
         int getBucketIndex(string key) {
            int hashCode = 0;
            int currentCoeff = 1;
            for (int i = key.length() - 1; i >= 0; i--) {
                hashCode += key[i] * currentCoeff;
                hashCode = hashCode % numberBuckets;
                currentCoeff *= 37;
                currentCoeff = currentCoeff % numberBuckets;
            }
            return hashCode % numberBuckets;
        }

    public:
        Map () {
            count = 0;
            numberBuckets = 5;
            buckets = new MapNode<V>*[numberBuckets];
            for (int i = 0; i < numberBuckets; i++) {
                buckets[i] = NULL;
            }
        }

        ~Map() {
            for (int i = 0; i < numberBuckets; i++) {
                delete buckets[i];
            }
            delete [] buckets;
        }

        int size() {
            return count;
        }

        V getValue(string key) {
            int bucketIndex = getBucketIndex(key);
            MapNode<V> *head = buckets[bucketIndex];
            while (head != NULL) {
                if (head->key == key) {
                    return head->value;
                }
                head = head->next;
            }
            return 0;
        }

        void rehash() {
            MapNode<V>**temp = buckets;
            buckets = new MapNode<V>*[numberBuckets * 2];
            for (int i = 0; i < 2 * numberBuckets; i++) {
                buckets[i] = NULL;
            }

            int oldBucketCount = numberBuckets;
            numberBuckets *= 2;
            count = 0;

            for (int i = 0; i < oldBucketCount; i++) {
                MapNode<V> *head = temp[i];
                while (head != NULL) {
                    string key = head->key;
                    V value = head->value;
                    insert(key, value);
                    head = head->next;
                }
            }

            for (int i = 0; i < oldBucketCount; i++) {
                delete temp[i];
            }

            delete [] temp;
        }

        void insert(string key, V value) {
            int bucketIndex = getBucketIndex(key);
            MapNode<V> *head = buckets[bucketIndex];
            while (head != NULL) {
                if (head->key == key) {
                    head->value = value;
                    return;
                }
                head = head->next;
            }
            head = buckets[bucketIndex];
            MapNode<V> *node = new MapNode<V>(key, value);
            node->next = head;
            buckets[bucketIndex] = node;
            count++;

            double loadFactor = (1.0 * count) / numberBuckets;

            if (loadFactor > 0.7) {
                rehash();
            }
        }

        V remove(string key) {
            int bucketIndex = getBucketIndex(key);
            MapNode<V> *head = buckets[bucketIndex];
            MapNode<V> *prev = NULL;
            while (head != NULL) {
                if (head->key == key) {
                    if (prev == NULL) {
                        buckets[bucketIndex] = head->next;
                    } else {
                        prev->next = head->next;
                    }
                    V value = head->value;
                    head->next = NULL;
                    delete head;
                    count--;
                    return value;
                }
                prev = head;
                head = head->next;
            }
            return 0;
        }
};
