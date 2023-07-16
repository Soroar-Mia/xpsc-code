///********Bismillahir Rahmanir Rahim ********
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        int mn=min(a,b);

        if(mn%2)
        {
            cout<<"Zlatan"<<endl;
        }
        else
        {
            cout<<"Ramos"<<endl;
        }
    }
    return 0;
}
