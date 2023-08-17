#include<bits/stdc++.h>
using namespace std;
#define ll int

#define mod 998244353
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, i, j, inc, dec, f;

    cin>>t;

    for(;t--;)
    {
        cin>>n;

        inc=dec=0;
        f=0;

        ll a[n];

        for(i=0;i<n;i++){
            cin>>a[i];
        }

        for(i=1; i<n; i++)
        {
            if(a[i]>a[i-1]){
                if(dec==0){
                    inc=1;
                }else{
                    f++;
                    break;
                }
            }else if(a[i]<a[i-1]){
                dec=1;
            }
        }
        if(f==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }

}
