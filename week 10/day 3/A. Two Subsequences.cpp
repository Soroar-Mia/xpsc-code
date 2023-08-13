#include<bits/stdc++.h>
const int MOD=1e9+7;

#define  pf                 printf
#define  sc                 scanf

#define  s1(n)              scanf("%d",&n)
#define  s2(n1,n2)          scanf("%d %d",&n1,&n2)
#define  s3(n1,n2,n3)       scanf("%d %d %d",&n1,&n2,&n3)
#define  s4(n1,n2,n3,n4)    scanf("%d %d %d %d",&n1,&n2,&n3,&n4)

#define  ss1(n)             scanf("%lld",&n)
#define  ss2(n1,n2)         scanf("%lld %lld",&n1,&n2)
#define  ss3(n1,n2,n3)      scanf("%lld %lld %lld",&n1,&n2,&n3)
#define  ss4(n1,n2,n3,n4)   scanf("%lld %lld %lld %lld",&n1,&n2,&n3,&n4)

#define  p1(x)              printf("%I64d",x)
#define  p2(x,y)            printf("%I64d %I64d",x,y)
#define  p3(x,y,z)          printf("%I64d %I64d %I64d",x,y,z)

#define  fi(i,a,b)          for(long long i=a;i<=b;i++)
#define  fm(i , a)          for(long long i=1;i<=a;i++)
#define  fd(i,a,b)          for(long long i=b;i>=a;i--)

#define  clr(x)             memset(x,0,sizeof(x))
#define  cln(x)             memset(x,-1,sizeof(x))

#define  fw                 freopen("output.txt","w",stdout);

typedef long long int ll;
///ll ar[1009],arr[1009];
using namespace std;

/*ll LCM(ll a,ll b)
{
    return (a/(__gcd(a,b)))*b;
}*/

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,i,mx=INT_MIN;
       cin>>n;
       ll ar[n+5],sum=0;
       for(i=1;i<=n;i++)
       {
        cin>>ar[i];
        sum+=ar[i];
        mx=max(mx,ar[i]);
       }
       sum=sum-mx;
       double x = (float)sum/(n-1);
       //printf("%lf",x);
       printf("%0.9lf\n",mx+x);
    }
    return 0;
}
