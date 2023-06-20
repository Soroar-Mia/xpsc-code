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
        int a[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        int p = 0;
        int q = n - 1;
        if (n > 1)
        {
            while (p < q)
            {
                ans += (a[q] - a[p]);
                p++;
                q--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}


