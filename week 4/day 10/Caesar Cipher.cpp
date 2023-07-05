#include <bits/stdc++.h>
using namespace std;

string getROTCipher(const string& S, const string& T, const string& U) {
    int N = S.length();
    int K = 0;

    for (int i = 0; i < N; ++i) {
        int diff = (T[i] - S[i] + 26) % 26;
        if (K == 0)
            K = diff;
        else if (K != diff)
            return "Invalid";
    }

    string result = U;

    for (char& ch : result) {
        ch = 'a' + ((ch - 'a' + K) % 26);
    }

    return result;
}

int main() {
    int Q;
    cin >> Q;

    for (int q = 0; q < Q; ++q) {
        int N;
        cin >> N;

        string S, T, U;
        cin >> S >> T >> U;

        string cipher = getROTCipher(S, T, U);
        cout << cipher << endl;
    }

    return 0;
}
