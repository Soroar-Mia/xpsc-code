#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int m;
        cin>> m;
        ll x=1,ans=m-x;
        while(x<=m)
        {
            ans=min(ans,m-x);
            x*=10;
        }
        cout<<ans<<endl;
    }
    return 0;
}
