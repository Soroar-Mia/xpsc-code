#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector <int> a(n);
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i > 0)
            {
                sum += abs(a[i - 1] - a[i]);
            }
        }

        if (sum == 0) cout << 1 << '\n';
        else
        {
            int ans = 2;
            n = unique(a.begin(), a.end()) - a.begin();

            for (int i = 1; i < n - 1; i++)
            {
                if ((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1])) ans++;
            }

            cout << ans << '\n';
        }
    }

    return 0;
}
