#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    string s;
    string a="ABC";
    cin>>s;
    int i=0,j=0,k=0,counts=0,ans=0;
    while(i<n-2)
    {
        if(j<i+3)
        {
            if(s[j]==a[k])
            {
                counts++;
            }
            j++;
            k++;
            if(counts==3)
            {
                ans++;
            }
        }
        else
        {
            i++;
            j=i;
            counts=0;
            k=0;
        }

    }

    cout<<ans;

    return 0;
}


