///******** Bismillahir Rahmanir Rahim *******

#include<bits/stdc++.h>
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
        int one=0;
        int zero=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]-'0'==0)
            {
                zero++;
            }
            else if(s[i]-'0'==1)
            {
                one++;
            }
        }
        if(n<3)
        {
            cout<<0<<endl;
        }
        else if(one!=zero)
        {
            cout<<min(one,zero)<<endl;
        }
        else
        {
            cout<<(min(one,zero)-1)<<endl;
        }
    }
}




