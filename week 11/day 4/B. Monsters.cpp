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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        vector<int> ans;
        vector<pair<int,int>> dex;
        for(int i=0; i<n; i++)
        {
            if(a[i]%k==0)
            {
                ans.push_back(i+1);
            }
            else
            {
                dex.push_back({a[i]%k,i+1});
            }
        }

        sort(dex.begin(),dex.end(),[&](pair<int,int> x,pair<int,int> y)
        {
            if(x.first==y.first)
            {
                return (x.second<y.second);
            }
            return (x.first>y.first);
        });

        for(auto i:dex)
        {
            ans.push_back(i.second);
        }

        for(int i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }

        cout<<endl;
    }
    return 0;
}
