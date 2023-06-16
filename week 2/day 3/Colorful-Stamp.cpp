#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        int n;
        cin>>n;
        int ans =0;
        string s;
        cin>> s;
        for(int i=0; i<n; i++)
        {
            if(s[i]!='W')
            {
                int b=0, r=0;
                while(i<n && s[i] !='W')
                {
                    if(s[i]=='R')
                    {
                        r++;
                    }
                    else
                    {
                        b++;
                    }

                    i++;
                }
                if(b==0 || r==0)
                {
                    ans =1;
                    break;
                }
            }
        }
        if(ans==0)
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
