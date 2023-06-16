#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, X;
        char ch;
        cin>>a>>ch>>b>>X;
        int h=X/60;
        int m=X%60;
        map<string,int>mp;
        int cnt=0;
        for(int i=1; i<=1440; i++)
        {
            int x=a+h;
            int y=b+m;
            if(y>=60)x++;
            a=x%24;
            b=y%60;
            string hh,mm;
            hh=to_string(a);
            mm=to_string(b);
            string h1,m1;
            if(hh.size()==1)
            {
                h1='0';
                h1 +=hh[0];
                hh=h1;
            }
            if(mm.size()==1)
            {
                m1='0';
                m1 +=mm[0];
                mm=m1;
            }
            string ans;
            ans=hh;
            ans +=mm;
            reverse(mm.begin(),mm.end());
            if(mp[ans] !=0)break;
            if(mm==hh)
            {
                cnt++;
                mp[ans]++;
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}
