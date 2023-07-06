#include<bits/stdc++.h>
using namespace std;

map<string,int>index;

void pre_cal()
{
    int id=0;
    string s(2,'.');
    for(char i='a'; i<='z';i++)
    {
        for(char j='a'; j<='z';j++)
        {
            if(i==j)continue;
            s[0]=i;
            s[1]=j;
            index[s]=++id;
        }
    }
    for(char i='a'; i<='z';i++)
    {
        s[0]=i;
        s[1]=i;
        index[s]=++id;
    }
}



int main()
{
    pre_cal();
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<index[s]<<endl;
    }
    return 0;
}
