#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n;
        string s;
        cin >>s;
        string ss="";
        for(int i=2; i<n ; i++)
        {
            ss.push_back(s[i]);
        }
        int si=0, ssi=0;
        long long int ans=1;
        while(si<n-2)
        {
            if(s[si] != ss[ssi])
            {
                ans++;
            }
            si++;
            ssi++;
        }
        cout<<ans<<endl;

    }
    return 0;
}

