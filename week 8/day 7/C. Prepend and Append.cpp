#include <bits/stdc++.h>
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=n;
        int l=0,r=n-1;
        while(l<r and s[l]!=s[r])
        {
            l++,r--,ans-=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
