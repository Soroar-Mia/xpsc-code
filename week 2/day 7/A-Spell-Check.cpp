#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    while(n--)
    {
        int N;
        string T ="Timru";
        cin>>N;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(N !=5)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(s==T)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
    }
    return 0;
}
