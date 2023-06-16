#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        int n;
        cin >> n;
        int a[n];
        int odd=0;
        int even=0;
        for(int i=0; i<n; i +=2)
        {
            if(a[i] %2==0)
            {
                odd++;
            }
            else if(a[i] %2==1)
            {
                even++;
            }
        }


    }

    return 0;
}


