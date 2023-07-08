#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != -1)
            {
                ll target = (ll)a[i] * x;
                int found = -1;
                int low = i + 1, high = n - 1;
                while (low <= high)
                {
                    int mid = low + (high - low) / 2;
                    if (a[mid] == target)
                    {
                        found = mid;
                        high = mid - 1;
                    }
                    if (a[mid] < target)
                    {
                        low = mid + 1;
                    }
                    else
                    {
                        high = mid - 1;
                    }
                }
                if (found == -1)
                {
                    ans++;
                }
                else
                {
                    a[found] = -1;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
