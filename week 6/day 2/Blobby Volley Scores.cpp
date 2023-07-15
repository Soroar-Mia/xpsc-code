/// ********** Bismillahir Rahmanir Rahim ********

#include<bits/stdc++.h>
#define ll long long
using namespace std;

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
        int a,b=0,i=0,j=1;
        if(s[0]=='A')
        {
            a=1;
        }
        else
        {
            a=0;
        }
        while(j<n)
        {
            if(s[i]=='A' && s[i]==s[j])
            {
                a++;
                i++;
                j++;
            }
            else if(s[i]=='B' && s[i]==s[j])
            {
                b++;
                i++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}


