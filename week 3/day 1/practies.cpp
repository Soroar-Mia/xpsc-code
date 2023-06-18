#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        int cnt =0;
        int even=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;

        }
        for(auto it : mp)
        {
            if(it.second % 2 == 1) cnt++;
            else even++;
        }
        cout<<cnt+ (even/2)*2<<endl;
    }
}
