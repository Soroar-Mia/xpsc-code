#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    auto it = mp.begin();
    int last = it->first;
    cout <<"last = it->first ="<<  last << endl;
    int lastCount = it->second;
    cout <<"lastCount = it->second;="<<  lastCount << endl;
    int ans = it->second;
    cout <<"ans = it->second; ="<<  ans << endl;
    it++;
    for (; it != mp.end(); it++)
    {
        if (it->first != (last + 1))
        {
            ans += it->second;
            cout <<"ans += it->second ="<<  ans << endl;
        }
        else
        {
            ans += max(0, it->second - lastCount);
            cout <<"ans += max(0, it->second - lastCount) ="<<  ans << endl;
        }
        last = it->first;
        cout <<"last = it->first ="<<  last << endl;
        lastCount = it->second;
        cout <<"lastCount = it->second; ="<<  lastCount << endl;

        cout <<" ------------Loop end-------------"<< endl;
    }
    cout <<"final ans ="<<  ans << endl;

    return 0;
}
