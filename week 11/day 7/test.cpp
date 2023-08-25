///******* bismillahir rahmanir rahim *********

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t = 0;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string> s(n);
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }

        int temp=0;
        int ans = 0;
        vector<string> p;
        for(int i=0; i<m; i++)
        {
            string str="";
            for(int j=0; j<n; j++)
            {
                str+=s[j][i];
            }
            p.push_back(str);
        }

        string match ="vika";
        int j=0,i=0;
        while(i<m)
        {
            if (p[i].find(match[j]) != string::npos)
            {
                j++;
            }
            if(j==4) break;
            i++;
        }
        if(j==4)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}



