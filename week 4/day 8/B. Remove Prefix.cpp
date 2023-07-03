#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T,x,i,j,k,p,s;
    cin>>T;
    while(T--)
    {
        cin>>x;
        long long int n[x];
        map<long long int,long long int>mp;

        s=0;
        for(i=0; i<x; i++)
        {
            cin>>n[i];
        }

        for(i=x-1; i>=0; i--)
        {
            if(mp[n[i]]==0) s++;
            else break;

            mp[n[i] ]++;
        }

        cout<<x-s<<endl;

    }

}
