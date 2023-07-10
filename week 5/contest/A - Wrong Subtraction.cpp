//Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a, b, num = 0;
    cin >> a >> b;
    for (ll i = 1; i <= b; i++)
    {
        string s = to_string(a);
        if ((s[s.size() - 1] - '0') > 0)
        {
            int n = stoi(s);
            a = n - 1;
            continue;
        }
        if ((s[s.size() - 1] - '0') == 0)
        {
            int n = stoi(s);
            a = n / 10;
        }
    }
    cout << a << endl;
    return 0;
}
