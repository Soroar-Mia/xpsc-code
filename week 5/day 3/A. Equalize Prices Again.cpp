//Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll              long long
using namespace std;

int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n;
        ll sum=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            sum +=x;
        }
        int ans= ceil((double)sum/n);
        cout<<ans<<endl;
    }

    return 0;
}
