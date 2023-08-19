#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int x=0;
        for(int i=0; i<n; i++)
        {
            x^=a[i];
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<x<<endl;
        for(int i=0; i<n; i++)
        {
            a[i]^=x;
        }
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        int z=a[0];
        cout<<endl;
        for(int i=1; i<n; i++)
        {
            z^=a[i];
            cout<<z<<" ";
        }
        cout <<endl;
        for(int i=0; i<n; i++)
        {
            a[i]^=x;
            cout<<a[i]<<" ";
        }
        int y=0;
        for(int i=0; i<n; i++)
        {
            y^=a[i];
            cout<<y<<" ";
        }
        cout<<endl;
        if(y==0)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        cout<<"-----------------------------";
    }
    return 0;
}

