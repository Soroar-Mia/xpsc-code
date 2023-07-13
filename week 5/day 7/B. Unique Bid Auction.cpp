// Bismillahir rahmanir rahim

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m,i,j,k,l;
        cin>>n;
        vector<int>a(n);
        vector<vector<int>>v(n+1);
        map<int,int>mp;
        for(i=0; i<n; i++)
        {
            cin>>a[i];

            mp[a[i]]++;


        }
        for(i=0; i<n; i++)
        {
            --a[i];

            v[a[i]].push_back(i);
        }
        int ans=9999999;
        l=0;
        for(auto x:mp)
        {
            if(v[x.first-1].size()==1)
            {



                ans=min(ans,x.first);
                l=1;
            }
        }
        if(l==1)
        {
            cout<<v[ans-1][0]+1<<endl;
        }
        else
            cout<<"-1"<<endl;


    }
}
