///******** Bismillahir Rahmanir Rahim *******
#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ab=a+b;
        int ac=a+c;
        int bc=b+c;
        bool ans=false;
        if(ab>=10)
        {
            ans=true;
        }
        else if(ac>=10)
        {
            ans=true;
        }
        else if(bc>=10)
        {
            ans=true;
        }

        if(ans)
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
