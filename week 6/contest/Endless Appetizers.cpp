///******** Bismillahir Rahmanir Rahim *******

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,r;
        cin>>x>>y>>r;
        int extra=r/30;
        int total=x + extra;
        float num = static_cast<float>(total) / y;
        int ans= ceil(num);
        cout<<ans<<endl;
    }
    return 0;
}
