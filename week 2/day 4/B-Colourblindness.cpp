#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int n, ans=0;   cin>>n;
        string s1, s2;
        cin>> s1 >> s2;
        for(int i=0; i<n; i++)
        {
            if(s1[i] != s2[i] && (s1[i]=='R' || s2[i]=='R'))
            {
                ans=1;
                break;
            }
        }
        if(ans)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
