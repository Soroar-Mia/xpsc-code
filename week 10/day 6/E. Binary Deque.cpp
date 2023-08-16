#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

// PRIME NUMBER TEST//
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

// Graph Grid //
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int sum=0;
        int ar[n+4];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        if(sum==s)cout<<0<<endl;
        else if(sum<s)cout<<-1<<endl;
        else{
            int cnt=0;
            int ans=0;
            int k;
            for(int i=0;i<n;i++)
            {
                ans+=ar[i];
                cnt++;
                if(ans==s)
                {
                    k=i+1;
                    break;
                }
            }
            int mx=cnt;
            int ind=0;
            for(int i=k;i<n;i++)
            {
                int j=i;
                while(j<n)
                {
                    if(ar[j]==1)
                    {
                        break;
                    }
                    cnt++;
                    mx=max(mx,cnt);
                    j++;
                }
                i=j;
                ans++;
                while(ind<n)
                {
                    if(ar[ind]==1)
                    {
                        //cnt--;
                        ind++;
                        break;
                    }
                    cnt--;
                    ind++;
                    mx=max(mx,cnt);
                }
                //cout<<ind<<" "<<i<<" "<<j<<" "<<mx<<endl;
            }
            cout<<n-mx<<endl;
        }
    }
}
