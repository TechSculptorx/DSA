#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeKSortedArrays(vector<vector<int>*> input) {
    // Write your code here
    vector<int> output;
    for (int i = 0; i < input.size(); i++)
    {
        for (int j = 0; j < input[i]->size(); j++)
        {
            output.push_back(input[i]->at(j));
        }
    }
    for (int i = 0; i < output.size(); i++)
    {
        for (int j = i + 1; j < output.size(); j++)
        {
            if (output[i] > output[j])
            {
                int temp = output[i];
                output[i] = output[j];
                output[j] = temp;
            }
        }
    }
    return output;
}

int main() {
    int k;
    cin >> k;

    vector<vector<int> *> input;

    for (int j = 1; j <= k; j++) {
        int size;
        cin >> size;
        vector<int> *current = new vector<int>;

        for (int i = 0; i < size; i++) {
            int a;
            cin >> a;
            current->push_back(a);
        }

        input.push_back(current);
    }

    vector<int> output = mergeKSortedArrays(input);

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    return 0;
}
