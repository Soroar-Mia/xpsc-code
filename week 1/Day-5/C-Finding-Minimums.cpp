#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> numbers(N);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    int lastGroupSize = N % K;
    int fullGroups = N / K;

    for (int i = 0; i < fullGroups; i++) {
        int groupStart = i * K;
        int groupEnd = groupStart + K;
        int minNumber = *min_element(numbers.begin() + groupStart, numbers.begin() + groupEnd);
        cout << minNumber << " ";
    }

    if (lastGroupSize > 0) {
        int lastGroupStart = fullGroups * K;
        int lastGroupEnd = lastGroupStart + lastGroupSize;
        int minNumber = *min_element(numbers.begin() + lastGroupStart, numbers.begin() + lastGroupEnd);
        cout << minNumber;
    }

    cout << endl;

    return 0;
}
