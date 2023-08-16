#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);     cin.tie(NULL);     cout.tie(NULL);
    int t;  cin >> t;   while (t--)
    {
        int n;  cin >> n;

        int sum=0, fmin=INT_MAX, smin=INT_MAX;

        for (int i=0; i<n; i++)
        {
            int m;  cin >> m;
            int a[m];
            for (int j=0; j<m; j++) cin >> a[j];
            sort(a, a+m);

            sum+=a[1];

            fmin=min(fmin, a[0]);
            smin=min(smin, a[1]);
        }

        cout << sum+fmin-smin << endl;
    }
}
