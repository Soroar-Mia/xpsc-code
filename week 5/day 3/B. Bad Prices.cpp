//Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1500000;

int main()
{
    int a[N];
    int i, j, k;
    int n, m, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];

        int cnt = 0, mn = a[n - 1];
        for (i = n - 2; i >= 0; i--)
        {
            if (a[i] > mn)
                cnt++;

            mn = min(a[i], mn);
        }

        cout << cnt << endl;
    }

    return 0;
}
