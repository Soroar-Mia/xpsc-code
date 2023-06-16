#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    unordered_map<int, int> freq;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        freq[A[i]]++;
    }

    int minElement = A[0];


    for (int i = 1; i < N; i++) {
        if (A[i] < minElement) {
            minElement = A[i];
        }
    }

    if (freq[minElement] % 2 == 1) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }

    return 0;
}
