///******* bismillahir rahmanir rahim *******

#include<bits/stdc++.h>
using  namespace  std;
typedef long long int ll;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[n+3];
        for(int i=1; i<=n; i++)cin>>ar[i];
        ll ans=ar[1]-1;
        ll ind=ans;
        for(int i=2; i<=n; i++)
        {
            if(ind+i<ar[i])
            {
                ll x =ar[i]-(ind+i);
                ind+=x;
                ans+=x;
            }
        }
        cout<<ans<<endl;
    }
}
///********* Alhamdulillah ***********
