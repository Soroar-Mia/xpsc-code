///*******Bismillahir Rahmanir Rahim********
///*** Read in the name of Allah, who created you ****
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll N,M;
        cin>>N>>M;
        if (N == M)
        {
            if (N % 2 == 0)
            {
                cout<<"CHEFINA"<<endl;
                continue;
            }
            cout<<"CHEF"<<endl;
            continue ;
        }
        else if (N > M)
        {
            if (M%2 == 0 && N == M + 1)
            {
                cout<<"CHEFINA"<<endl;
                continue;
            }
            cout<<"CHEF"<<endl;
        }
        else
        {
            if (M%2 == 0 && N + 1 == M)
            {
                cout<<"CHEF"<<endl;
                continue;
            }
            cout<<"CHEFINA"<<endl;
        }

    }
    return 0;
}

