#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n;
        vector<int> a(n);
        bool okE=true, okO=true;
        for(int i=0; i<n ; i++)
        {
            cin>>a[i];
        }
        vector<int> even, odd;
        for(int i=0; i<n; i++)
        {
            if(a[i] %2==0)
            {
                even.push_back(a[i]);
            }
            else
            {
                odd.push_back(a[i]);
            }
        }

        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());

        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)continue;
            if(odd.empty() || odd[0]>=a[i])
            {
                okE=false;
                break;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(a[i]%2 !=0)continue;
            if(odd.empty() || odd[0]>=a[i])
            {
                okO=false;
                break;
            }
        }

        if( okE || okO)
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
