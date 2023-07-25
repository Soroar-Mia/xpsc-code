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
        ll N,M,L;
        cin>>N>>M>>L;
        ll NN=N-L;
        ll MM=NN/M;
        if (N == L)
        {
            cout<<1<<endl;
        }
        else if (N > L)
        {
            if(NN%M==0)
            {
                cout<<MM + 1<<endl;
            }
            else
            {
                cout<<MM + 2<<endl;
            }

        }
        else
        {

            cout<<0<<endl;
        }

    }
    return 0;
}

