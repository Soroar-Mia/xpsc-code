///******** Bismillahir Rahmanir Rahim *******

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans = n*(n-1);
        ans%=mod;
        for(ll i=1; i<=n; i++)
        {
            ans*=i;
            ans%=mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}
