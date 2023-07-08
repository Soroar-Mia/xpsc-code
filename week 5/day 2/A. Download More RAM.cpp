#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a(n);

        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            a[i].first = b;
        }
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            a[i].second = c;
        }

        long long int ans = k;
        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++)
        {
            if (a[i].first <= ans)
            {
                ans += a[i].second;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
