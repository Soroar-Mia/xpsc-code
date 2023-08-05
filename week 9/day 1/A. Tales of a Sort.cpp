#include <iostream>
#include <vector>
using namespace std;

// Function to check if the array is sorted
bool isSorted(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

// Function to perform one operation on the array
void performOperation(vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        arr[i] = max(0, arr[i] - 1);
    }
}

// Function to count the number of operations required to sort the array
int countOperationsToSort(vector<int>& arr) {
    int operations = 0;
    while (!isSorted(arr)) {
        performOperation(arr);
        ++operations;
    }
    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int operations = countOperationsToSort(arr);
        cout << operations << endl;
    }

    return 0;
}

