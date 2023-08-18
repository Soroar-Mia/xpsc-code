#include<bits/stdc++.h>
using  namespace  std;
typedef long long int ll;
#define mod 1000000007


ll power(ll base, ll p)
{

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll base,p;
        cin>>base>>p;
        ll ans=1;
        while(p)
        {
            if(p%2==1)
            {
                ans=(ans*base)%mod;
                p--;
            }
            else
            {
                base=(base*base)%mod;
                p/=2;
            }
        }
        ll power= ans%mod;
        cout<<power<<endl;
    }
    return 0;
}
