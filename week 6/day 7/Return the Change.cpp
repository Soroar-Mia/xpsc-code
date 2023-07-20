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
        int n;
        cin>>n;
        int Remainder=n%10;
        cout<<Remainder<<endl;
        int cost=(n - Remainder);

        if(Remainder>=5)
        {
            cout<<100 - (cost + 10)<<endl;
        }
        else
        {
            cout<<100 - cost<<endl;
        }
    }
    return 0;
}

