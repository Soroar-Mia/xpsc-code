#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;

        long long int ans=0;
        while(n!=0)
        {
            ans+=n;
            n/=2LL;
        }

        cout<<ans<<endl;
    }
    return 0;
}
