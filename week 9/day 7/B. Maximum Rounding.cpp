#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    s = "0" + s;
    ll pos = 0;
    for(ll i = n; i >= 1; i--)
    {
        if(s[i] >= '5')
        {
            pos = i;
            if(s[i - 1] != '9')
            {
                s[i - 1]++;
            }
        }
    }
    if(pos == 0)
    {
        for(ll i = 1; i <= n; i++)
        {
            cout << s[i];
        }
        cout << '\n';
        return;
    }
    bool ok = 1;
    for(ll i = pos; i <= n; i++)
    {
        s[i] = '0';
    }
    for(ll i = 0 + (s[0] == '0'); i <= n; i++)
    {
        cout << s[i];
    }
    cout << '\n';
}

int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        solve();
    }
}
