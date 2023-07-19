///********Bismillahir Rahmanir Rahim ********
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int,greater<int>> a;
        for(int i=0; i<n; i++)
        {
            int b;
            cin>>b;
            a.insert(b);
        }
        int p = *a.begin();
        a.erase(a.begin());
        int q=*a.begin();
        int ans=p+q;
        cout<<ans<<endl;
    }
    return 0;
}
