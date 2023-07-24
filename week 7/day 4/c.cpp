///*******Bismillahir Rahmanir Rahim********

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin>>n;
    int a[n],b[n],ans = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b,b+n,greater<int>());
    for(int i=0; i<n; i++)
    {
        if(i == 0)
        {
            ans++;
        }
        else
        {
            ans += b[i] * i + 1;
        }
    }
    cout<<ans<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(b[i] == a[j])
            {
                a[j] = 0;
                cout<<j+1<<" ";
                break;
            }
        }
    }
    cout<<endl;

    return 0;
}
