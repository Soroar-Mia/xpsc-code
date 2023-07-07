#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
    if((a%b)==0)
    {
        return b;
    }
    else
    {
        return gcd(b, a%b);
    }
}

int main()
{
    ll t, n, i, j, g, f;

    cin>>t;

    while(t--)
    {
        cin>>n;

        ll a[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        g=a[0];

        for(i=2; i<n; i+=2)
        {
            g=gcd(g, a[i]);
        }

        if(g>1)
        {
            f=0;

            for(i=1; i<n; i+=2)
            {
                if((a[i]%g)==0)
                {
                    f++;
                    break;
                }
            }

            if(f==0)
            {
                cout<<g<<endl;
                continue;
            }
        }

        g=a[1];

        for(i=3; i<n; i+=2)
        {
            g=gcd(g, a[i]);
        }

        if(g>1)
        {
            f=0;

            for(i=0; i<n; i+=2)
            {
                if((a[i]%g)==0)
                {
                    f++;
                    break;
                }
            }

            if(f==0)
            {
                cout<<g<<endl;
                continue;
            }
        }

        cout<<"0"<<endl;

    }
}
