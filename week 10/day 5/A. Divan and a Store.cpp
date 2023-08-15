#include <bits/stdc++.h>
#include <iostream>
typedef long long int ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.setf(ios::fixed);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,r,k;
        cin>>n>>l>>r>>k;
        ll s=0,c=0;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        for(ll i=0; i<n; i++)
        {
            if(s>=k)
            {
                break;
            }
            else if(a[i]<=r && a[i]>=l &&(s+a[i])<=k)
            {
                s+=a[i];
                c++;
            }
        }
        cout<<c<<endl;
    }
}
