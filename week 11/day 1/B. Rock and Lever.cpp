#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n];
        ll s=0;
        for(ll i=0; i<n; i++)
            cin>>a[i];
        ll b[33]= {0};
        for(ll i=0; i<n; i++)
        {
            ll z=a[i];
            ll c=0;
            while(z>0)
            {
                z=z/2;
                c++;
            }
            b[c]++;
        }
        for(ll i=0; i<=32; i++)
        {
            if(b[i]>=2)
                s=s+(b[i]*(b[i]-1)/2);
        }
        cout<<s<<endl;
    }
}
