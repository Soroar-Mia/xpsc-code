//Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    unordered_map<string, int> ss;

    for (int i = 0; i < n - 1; i++) {
        string twoGram = s.substr(i, 2);
        ss[twoGram]++;
    }

    string ans;
    int id = 0;

    for (auto it = ss.begin(); it != ss.end(); ++it) {
        if (it->second > id) {
            id = it->second;
            ans = it->first;
        }
    }

    cout << ans << endl;

    return 0;
}
