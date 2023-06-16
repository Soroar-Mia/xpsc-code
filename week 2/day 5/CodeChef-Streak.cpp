#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        long long int b[n];
        long long int ac=0;
        long long int bc=0;
        for(long long int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        for(long long int j=0; j<n; j++)
        {
            cin>>b[j];
        }

        for(long long int j=0; j<n; j++)
        {
            if(a[j]==0)
            {
                ac=0;
            }
            else
            {
                ac++;
            }
        }
        for(long long int j=0; j<n; j++)
        {
            if(b[j]==0)
            {
                bc=0;
            }
            else
            {
                bc++;
            }
        }
        if(ac>bc)
        {
            cout<<"Addy"<<endl;
        }
        else if(ac == bc)
        {
            cout<<"Draw"<<endl;
        }
        else if(ac<bc)
        {
            cout<<"Om"<<endl;
        }

    }
    return 0;
}

