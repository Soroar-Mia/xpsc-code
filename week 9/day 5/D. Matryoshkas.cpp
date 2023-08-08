#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
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
        int lastCount = it->second;
        int ans = it->second;
        it++;
        for (; it != mp.end(); it++)
        {
            if (it->first != (last + 1))
            {
                ans += it->second;
            }
            else
            {
                ans += max(0, it->second - lastCount);
            }
            last = it->first;
            lastCount = it->second;
        }
        cout << ans << endl;
    }
    return 0;
}
