#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll t, a, b, diff, ans;

    cin>>t;

    for(; t--;)
    {
        cin>>a>>b;
        ans=0;

        if(a<b)
        {
            swap(a, b);
        }

        ans=ans+min((a-b)/2, b);
        b=b-ans;
        ans=ans+b/2;


        cout<<ans<<"\n";
    }

}
