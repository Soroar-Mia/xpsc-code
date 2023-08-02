#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define mod 1000000007
#define inf 1e18
#define setbits(x) __builtin_popcount(x)
#define zrbits(x) __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define fi(i,n) for(int i = 0;i < n;i++)
#define fd(i,n) for(int i = n;i >= 0;i--)
int dif(int a,int b)
{
    if(a > b)return a - b;
    else return b - a;
}
int gcd(int a, int b)
{
    if(b == 0)return a;
    return gcd(b, a%b);
}

bool check(int arr[],int k,int sum,int n)
{
    if(sum % k != 0)
        return false;
    int p = sum/k,curr = 0;
    for(int i = 0; i < n; i++)
    {
        curr += arr[i];
        if(curr == p)
            curr = 0;
        else if(curr > p)
            return false;
    }
    return true ;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    //  freopen("input.txt","r",stdin);
    //  freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum = 0;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(check(arr,n - i,sum,n))
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
