///******** Bismillahir Rahmanir Rahim *******

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        float des=(n*10)/100.0;
        float nn=n-des;

        if(nn<m)
        {
            cout<<"ONLINE"<<endl;
        }
        else if(m<nn)
        {
            cout<<"DINING"<<endl;
        }
        else
        {
            cout<<"EITHER"<<endl;
        }
    }
    return 0;
}
