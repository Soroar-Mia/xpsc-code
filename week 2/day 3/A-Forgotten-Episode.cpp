#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> watched(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> watched[i];
    }

    sort(watched.begin(), watched.end());
    bool ans=true;

    for (int i = 1; i <= n; i++) {
        if (i != watched[i - 1]) {
            cout << i << endl;
            ans =false;
            break;
        }
    }
    if(ans)
    {
        cout<<"0";
    }

    return 0;
}
