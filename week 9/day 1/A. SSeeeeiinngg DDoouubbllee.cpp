#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;

const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLKs                            = (int) 70000;
const int   BLKspan                         = (int) 700;

#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        map<char,int>freq;
        for(auto i:s)freq[i]+=2;

        string L="",R="";
        for(char c='a'; c<='z'; c++)
        {
            if(freq[c]==0)continue;
            for(int i=1; i<=freq[c]/2; i++)
            {
                L.push_back(c);
            }
            for(int i=1; i<=freq[c]/2; i++)
            {
                R.push_back(c);
            }
        }
        reverse(R.begin(),R.end());
        cout<<L<<R<<endl;
    }
    return 0;
}
