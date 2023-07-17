
///********Bismillahir Rahmanir Rahim ********
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int fst= (s[0]-'0')*10 + (s[1]-'0');
        int snd= (s[3]-'0')*10 + (s[4]-'0');
        if(fst>12)
        {
            cout<<"DD/MM/YYYY"<<endl;
        }
        else if(snd>12)
        {
            cout<<"MM/DD/YYYY"<<endl;
        }
        else
        {
            cout<<"BOTH"<<endl;
        }
    }
    return 0;
}




