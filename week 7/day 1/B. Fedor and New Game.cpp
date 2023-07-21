///******Bismillahir Rahmanir Rahim******
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=n-1; i>0; i--)
        {
            int ans= n & i;
            if(ans==0)
            {
              cout<<i<<endl;
              break;
            }
        }
    }
    return 0;
}



