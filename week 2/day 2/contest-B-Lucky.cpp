#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        string ticket;
        cin >> ticket;

        int sum_first = 0;
        int sum_second = 0;

        for (int i = 0; i < 3; i++)
        {
            sum_first += ticket[i] - '0';
            sum_second += ticket[i + 3] - '0';
        }

        if (sum_first == sum_second)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }

    return 0;
}
