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
        string s;
        cin>>s;
        int i=0 , j=1;
        map<string,int>mp;
        int ans =0;
        while(j < n)
        {
            string tmp="";
            tmp +=s[i];
            tmp +=s[j];
            mp[tmp]++;
            i++;
            j++;
        }
        for(auto it : mp)
        {
            if(it.second > 0) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
