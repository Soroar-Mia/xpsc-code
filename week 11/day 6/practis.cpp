#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int k;  cin>>k;
    int i=0,j=n-1;
    while(i<n)
    {
        if(v[i]+v[j]==k)
        {
            cout<<"YES"<<endl;
            break;
        }
        else if(v[i]+v[j]>k)
        {
            j--;
        }
        else if(v[i]+v[j]<k)
        {
            i++;
        }
    }

}
