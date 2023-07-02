#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ind =-1,sum=0;
        string s;
        cin>>s;
        int n= s.size();
        for(int i=n-1; i>0; i--)
        {
             sum=((s[i]-'0') + (s[i-1]-'0') );
            if(sum>9)
            {
                ind=i;
                break;
            }
        }
        if(ind !=-1)
        {
            for(int i=0; i<ind-2; i++)
            {
                cout<<s[i];
            }
            cout<<sum;

            for(int i=ind+1; i<n; i++)
            {
                cout<<s[i];
            }
            continue;
        }


        cout<<((s[0]-'0') + (s[1]-'0'));
        for(int i=2; i<n; i++)
        {
            cout<<s[i];
        }
    }

    return 0;
}

