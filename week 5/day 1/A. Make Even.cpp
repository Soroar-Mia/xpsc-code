#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n =s.length();

        if((s[n-1]-'0')%2==0)
        {
            cout<<0<<endl;
            continue;
        }
        if((s[0]-'0')%2==0)
        {
            cout<<1<<endl;
            continue;
        }
        int cnt =0;
        for(int i=0; i<n; i++)
        {
            if((s[i]-'0')%2==0)
            {
                cnt++;
                break;
            }
        }
        if(cnt>0)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
