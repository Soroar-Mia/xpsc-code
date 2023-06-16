#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
         int p;
        map<int,int>m;
        for(int i=0; i<n; i++)
        {
            cin>>p;
            m[p]++;

        }
        int ans = m.size();
        if((n-ans)%2)
        {
            ans--;
        }
        cout<< ans <<endl;
    }
    return 0;
}
