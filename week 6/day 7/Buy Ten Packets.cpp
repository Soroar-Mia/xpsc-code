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
        int a,b;
        cin>>a>>b;
        int aa=a*2;

        if(aa<=b)
        {
            cout<<a*5<<endl;
        }
        else
        {
            cout<<(b*2) + a<<endl;
        }
    }
    return 0;
}


