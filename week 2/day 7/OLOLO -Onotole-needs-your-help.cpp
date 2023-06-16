#include<bits/stdc++.h>
using namespace std;

int findUniquePyani(int N) {
    unordered_map<int, int> countMap;


    for (int i = 0; i < N; i++) {
        int pyani;
        cin >> pyani;
        countMap[pyani]++;
    }

    for (const auto& pair : countMap) {
        if (pair.second == 1) {
            return pair.first;
        }
    }

    return -1;
}

int main() {
    int N;
    cin >> N;

    int uniquePyani = findUniquePyani(N);

    cout << uniquePyani << endl;

    return 0;
}
