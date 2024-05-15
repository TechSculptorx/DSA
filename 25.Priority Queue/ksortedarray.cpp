#include <iostream>
#include <queue>
using namespace std;

void kSortedArray(int *arr, int n, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < k; i++) {
        pq.push(arr[i]);
    }
    int j = 0;
    for(int i = k; i < n; i++) {
        arr[j++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while(!pq.empty()) {
        arr[j++] = pq.top();
        pq.pop();
    }
}

int main () {

}
