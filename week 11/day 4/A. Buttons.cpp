#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;

        long long int cc=c%2;
        if(cc==1 && a<b)
        {
            cout<<"Second"<<endl;
        }
        else if(cc==0 && a<=b)
        {
            cout<<"Second"<<endl;
        }
        else
        {
            cout<<"First"<<endl;
        }

    }
}
