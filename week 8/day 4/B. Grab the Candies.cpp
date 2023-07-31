#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;
//constants :
const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLKs                            = (int) 70000;
const int   BLKspan                         = (int) 700;
//data_type_compressions :
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);




int main(){
    Faster;
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int GCD=a[0];
        for(int i=1;i<n;i++){
            GCD=__gcd(GCD,a[i]);
        }

        if(GCD==1){
            cout<<0<<endl;
            continue;
        }

        int ans=INT_MAX;

        for(int i=0;i<n;i++){
            int temp=a[i];
            a[i]=__gcd(a[i],(i+1));
            int g=a[0];
            for(int j=1;j<n;j++){
                g=__gcd(g,a[j]);
            }
            if(g==1){
                ans=min(ans,n-i);
            }
            a[i]=temp;
        }

        for(int i=0;i<n;i++){
            int tempI=a[i];
            a[i]=__gcd(a[i],(i+1));
            for(int j=i+1;j<n;j++){
                int tempJ=a[j];
                a[j]=__gcd(a[j],(j+1));
                int g=a[0];
                for(int k=1;k<n;k++){
                    g=__gcd(g,a[k]);
                }
                if(g==1){
                    ans=min(ans,(n-i)+(n-j));
                }
                a[j]=tempJ;
            }
            a[i]=tempI;
        }
        cout<<ans<<endl;
    }
    return 0;
}
