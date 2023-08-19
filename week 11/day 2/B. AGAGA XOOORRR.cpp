#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        int a[n];
        int ff=0,f=1;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n-1; i++)
        {
            int x=0;
            for(int j=0; j<=i; j++)
            {
                x^=a[j];
            }
            int f=0,t=0;
            for(int j=i+1; j<n; j++)
            {
                t^=a[j];
                if(t==x)
                {
                    f=1;
                    t=0;
                }
            }
            if(t==0 and f)
            {
                cout<<"YES"<<endl;
                ff=1;
                break;
            }
        }
        if(!ff)
        {
            cout<<"NO"<<endl;
        }
    }
}
