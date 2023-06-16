#include<bits/stdc++.h>
using namespace std;

int main()

{
    int j;
    cin>>j;
    while(j--)
    {
        int n;
        cin>>n;
        int ans=-1;
        map<int,int>m;
        for(int i=0; i<n; i++)
        {
            int p; cin>>p;
            m[p]++;
            if(m[p]>=3)
            {
                ans= p;
            }
        }
        cout<< ans << endl;
    }
    return 0;
}
