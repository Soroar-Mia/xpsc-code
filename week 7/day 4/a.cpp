///*******Bismillahir Rahmanir Rahim********

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int nn=0;
    for(int i=0; i<n; i+=2)
    {
        if(s[i]=='a' and s[i+1]=='a')
        {
            s[i+1]='b';
            nn++;
        }
        else if(s[i]=='b' and s[i+1]=='b')
        {
            s[i]='a';
            nn++;
        }
    }
    cout<<nn<<endl;
    cout<<s<<endl;
    return 0;
}
