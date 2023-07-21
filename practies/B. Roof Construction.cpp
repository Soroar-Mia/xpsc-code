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
        ll hc,dc;
        cin>>hc>>dc;
        ll hm,dm;
        cin>>hm>>dm;
        ll k,AI,HI;
        cin>>k>>AI>>HI;

        bool ans=false;
        for(ll i=0; i<=k; i++)
        {
            ll hhc=hc+(i*HI);
            ll ddc = dc +((k - i) * AI);
            ll x = (hm + ddc - 1) / ddc;
            ll y = (hhc + dm - 1) / dm;
            if(x <= y)
            {
                ans=true;
                break;
            }
        }

        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}






