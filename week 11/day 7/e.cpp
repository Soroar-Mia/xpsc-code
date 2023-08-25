#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

const int inf = 1e9;

void solve()
{
    int n, m, d;
    cin >> n >> m >> d;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    multiset<int> mt;
    int s = 0;
    int ans = -inf;

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0) continue;

        s += a[i];
        mt.insert(a[i]);

        if ((int)mt.size() > m)
        {
            s -= *mt.begin();
            mt.erase(mt.begin());
        }

        ans = max(s - (i + 1) * d, ans);
    }

    cout << max(ans, 0) << "\n";
}

signed main()
{
    int totalTests = 1;
    cin >> totalTests;

    for (int testNo = 1; testNo <= totalTests; testNo++)
    {
        solve();
    }

    return 0;
}
