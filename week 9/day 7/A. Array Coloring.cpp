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
        int a;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int sum=0;
        for(int i=0; i<v.size(); i++)
        {
            sum +=v[i];

        }
        if(sum % 2 ==0)
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
