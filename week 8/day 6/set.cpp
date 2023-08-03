///*******Bismillahir Rahmanir Rahim*******

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    for(int i=0; i<5; i++)
    {
        int n;
        cin>>n;
        s.insert(n);
    }
    set<int>::iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto itt:s)
    {
        if(itt==5)
        {
            s.erase(itt);
        }
    }
    for(auto itt:s)
    {
        cout<<itt<<" ";
    }
}
