#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        long long int x=1,ans=m-x;
        while(x<=m)
        {
            ans=min(ans,m-x);
            x*=10;
        }
        cout<<ans;
        cout<<endl;
    }
    return 0;
}
