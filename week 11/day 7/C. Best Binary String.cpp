#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();

        if(count(s.begin(),s.end(),'?')==0)
        {
            cout<<s<<endl;
            continue;
        }

        char last='?';
        queue<int> later;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='?')
            {
                later.push(i);
                continue;
            }
            last=s[i];
            while(!later.empty())
            {
                s[later.front()]=s[i];
                later.pop();
            }
        }


        char c='0';
        if(last=='1')c='1';
        while(!later.empty())
        {
            s[later.front()]=c;
            later.pop();
        }

        cout<<s<<endl;
    }
    return 0;
}
