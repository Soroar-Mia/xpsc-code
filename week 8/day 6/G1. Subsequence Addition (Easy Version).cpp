///******** Bismillahir Rahmanir Rahim *******

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(a[0]!=1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll sum=a[0];
        for(int i=1; i<n; i++)
        {
            if(a[i]<=sum)
            {
                sum+=a[i];
            }
            else
            {
                sum=-1;
                break;
            }
        }
        if(sum==-1)
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
