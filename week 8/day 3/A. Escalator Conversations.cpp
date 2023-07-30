///*******Bismillahir Rahmanir Rahim*******
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,k,h;
        cin>>n>>m>>k>>h;

        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int ans=0;
        for(int i=0; i<n; i++)
        {
            bool ok=false;
            for(ll x=1; x<=m; x++)
            {
                for(ll y=x+1LL; y<=m; y++)
                {
                    if(x==y)continue;
                    ll hDiff=abs(a[i]-h);
                    ll sDiff=y-x;
                    sDiff*=k;
                    ok|=(hDiff==sDiff);
                }
            }
            ans+=(ok);
        }

        cout<<ans<<endl;
    }
    return 0;
}
