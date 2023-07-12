//Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        bool ans=false;
        for(int i=0; i<n-1; i++)
        {
            int j=i+1;
            if((a[j] - a[i])>1)
            {
                ans=true;
                break;
            }
        }

        if(ans)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}



