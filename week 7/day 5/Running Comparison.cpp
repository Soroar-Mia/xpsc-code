///*******Bismillahir Rahmanir Rahim********
///*** Read in the name of Allah, who created you ****
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
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            int aa=a[i];
            int bb=b[i];
            if(aa>bb*2)
            {
                continue;
            }
            else if(aa*2<bb)
            {
                continue;
            }
            else
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
