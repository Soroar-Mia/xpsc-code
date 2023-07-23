///*****Bismillahir Rahamanir Rahim*********

#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a.begin(),a.end(),greater<int>());

        int num=a[x-1];

        cout<<num -1<<endl;
    }
    return 0;
}

