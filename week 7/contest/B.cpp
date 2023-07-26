///*******Bismillahir Rahmanir Rahim********
///*** Read in the name of Allah, who created you ****
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool CSortArray(vector<int>& a) {
    int n = a.size();

    vector<int> even, odd;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even.push_back(a[i]);
        } else {
            odd.push_back(a[i]);
        }
    }


    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int evenIdx = 0, oddIdx = 0;


    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            a[i] = even[evenIdx++];
        } else {
            a[i] = odd[oddIdx++];
        }
    }

    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (CSortArray(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
