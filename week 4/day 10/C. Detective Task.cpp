#include<bits/stdc++.h>
using namespace std;

const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLK                             = (int) 700;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n;
        n=s.size();

        if(count(all(s),'?')==n)
        {
            cout<<n<<endl;
            continue;
        }
        if(count(all(s),'1')==0)
        {
            int ans=0;
            in_range(i,0,n-1)
            {
                ans++;
                if(s[i]=='0')break;
            }
            cout<<ans<<endl;
            continue;
        }
        int last_zero=-1;
        int ans;
        in_range_back(i,0,n-1)
        {
            if(s[i]=='0')last_zero=i;
            else
            {
                if(s[i]=='1')
                {
                    if(last_zero==-1)
                    {
                        ans=n-i;
                        break;
                    }
                    else
                    {
                        ans=last_zero-i+1;
                        break;
                    }
                }
            }
        }

        cout<<ans<<endl;

    }
    return 0;
}
