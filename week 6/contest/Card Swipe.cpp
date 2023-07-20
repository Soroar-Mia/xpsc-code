///******** Bismillahir Rahmanir Rahim *******

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int getMaxP(int n, const vector<int>& swipes) {
    unordered_map<int, int> count;
    int maxPeople = 0;
    int currPeople = 0;

    for (int i = 0; i < n; i++) {
        if (count[swipes[i]] == 0) {
            currPeople++;
            count[swipes[i]] = 1;
        } else {
            currPeople--;
            count[swipes[i]] = 0;
        }
        maxPeople = max(maxPeople, currPeople);
    }

    return maxPeople;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> swipes(n);
        for (int i = 0; i < n; i++) {
            cin >> swipes[i];
        }

        int maxPeople = getMaxP(n, swipes);
        cout << maxPeople << endl;
    }

    return 0;
}
