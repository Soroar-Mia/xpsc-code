//Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll              long long
using namespace std;

int main()
{
    ll t ;
    cin>>t;
    while(t--)
    {
        int a, b, num=0, dif=-1;
        cin>>a>>b;
        for(int i=a; i<=b; i++)
        {
            string s=to_string(i);
            sort(s.begin(),s.end());
            int now=(s[s.size() -1]-'0') - (s[0]-'0');
            if(now==9)
            {
                num=i;
                break;
            }
            if(now>dif)
            {
                dif=now;
                num=i;
            }
        }
        cout<<num<<endl;
    }

    return 0;
}

