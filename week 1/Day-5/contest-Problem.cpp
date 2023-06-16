#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,m;
        cin>>n>>m;
        int n1 = n - 1;
        int m1 = m + 1;
        int n2 = n + 3;
        int m2 = m - 1;
        if (n1 == m1 || n2 == m2 || n == m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
