#include <bits/stdc++.h>
using namespace std;
#define nl          '\n'
#define mod               1000000007

typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n+=n;

        ll fact=1;
        for(int i=3; i<=n; i++)
        {
            fact*=i;
            fact%=mod;
        }
        cout<<fact<<nl;
    }
    return 0;
}
