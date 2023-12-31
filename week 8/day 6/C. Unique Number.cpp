#include <bits/stdc++.h>
#include <math.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846


const int M=998244353;
long long mod(long long x)
{
    return ((x%M + M)%M);
}
long long add(long long a, long long b)
{
    return mod(mod(a)+mod(b));
}
long long mul(long long a, long long b)
{
    return mod(mod(a)*mod(b));
}

ll modPow(ll a, ll b)
{
    if(b==0)
        return 1LL;
    if(b==1)
        return a%M;
    ll res=1;
    while(b)
    {
        if(b%2==1)
            res=mul(res,a);
        a=mul(a,a);
        b=b/2;
    }
    return res;
}

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<=4; i++)
    {
        string t1=s.substr(0,i);
        string t2=s.substr(n-4+i);
        string ans=t1+t2;
        if(ans=="2020")
        {
            cout<<"YES"<<"\n";
            return;
        }
    }
    cout<<"NO"<<"\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<fixed;
    cout<<setprecision(10);

    int t=1;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        solve();
    }
    return 0;
}

