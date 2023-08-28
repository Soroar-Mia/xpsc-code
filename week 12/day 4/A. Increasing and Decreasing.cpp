#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll total=0;
        vector<ll>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            total +=a[i];
        }
        ll mid=total/2;
        int ok=0;
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==mid)
                ok++;

            else if(a[i]>mid)
            {
                a[i+1]+=(a[i]-mid);
                a[i]=mid;
                ok++;
            }
            else
            {
                a[i+1]-=(mid-a[i]);
                a[i]=mid;
                ok++;
            }
        }
        if(a[n-1]==mid)
        {
            ok++;
        }

        cout<<ok<<" "<<endl;
    }
}
