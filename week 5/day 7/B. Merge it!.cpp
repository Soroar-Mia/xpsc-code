//******** Bismillahir rahmanir rahim ***********

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,mx=-1,ans=0;
        cin>>n;
        vector<ll> a;
        for(ll i=0; i<n; i++)
        {
            int c;
            cin>>c;
            if(c % 3==0)
            {
                ans++;
            }
            else
            {
                a.push_back(c);
            }
        }
        int nn=a.size();
        int j=0,k=1;
        while(k<nn+2)
        {
            int sum = (a[j] + a[k]);
            if( sum%3==0 )
            {
                ans++;
                a[j]=0;
                a[k]=0;
                j++;
                k=j+1;
                continue;
            }
            if(k==nn-1)
            {
                j++;
                k=j+1;
                continue;
            }
            k++;
            if(j==nn-2)
                break;
        }
        cout<<ans<<endl;

    }
    return 0;
}

