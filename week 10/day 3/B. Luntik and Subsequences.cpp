#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, i, j, c1, c2, ans;
    ll po[61];
    po[0]=1;

    for(i=1; i<=60; i++)
    {
        po[i]=(po[i-1]*2);
    }

    cin>>t;

    for(; t--;)
    {
        cin>>n;

        c1=c2=0;

        for(; n--;)
        {
            cin>>i;

            if(i==1)
                c1++;
            else if(i==0)
                c2++;
        }

        ans=po[c2];
        ans=ans*c1;

        cout<<ans<<"\n";

    }
}
