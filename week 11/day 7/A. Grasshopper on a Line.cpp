#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k;
        cin>>x>>k;

        if(x<k or x%k!=0)
        {
            cout<<1<<endl;
            cout<<x<<endl;
            continue;
        }

        cout<<2<<endl;
        cout<<1<<" "<<(x-1)<<endl;
    }
    return 0;
}
