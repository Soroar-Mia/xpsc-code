#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        char now='.';
        for(char c:s)
        {
            if(now=='.')
            {
                ans +=c;
                now=c;
            }
            else if(c==now)
            {
                now-'.';
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
