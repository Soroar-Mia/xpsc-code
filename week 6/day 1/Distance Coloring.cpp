///********* Bismillahir rahmanir rahim ***********
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int md = 1000000007;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {

        int n, k;
        cin >> n >> k;
        ll ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (k > 0)
                ans = (ans * k--) % md;
            else
                break;
        }
        cout << ans << endl;

    }
    return 0;
}


