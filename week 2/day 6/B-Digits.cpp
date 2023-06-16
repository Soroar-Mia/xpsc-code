#include <bits/stdc++.h>
using namespace std;

int countDigits(int N, int K) {
    int count = 0;
    while (N > 0) {
        N /= K;
        count++;
    }
    return count;
}

int main() {
    int N, K;
    cin >> N >> K;

    int numDigits = countDigits(N, K);
    cout << numDigits <<endl;

    return 0;
}
