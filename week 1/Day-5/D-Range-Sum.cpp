#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T;
    cin >> T;

    for(int j=0; j<T; j++)
    {
        long long int L, R;
        cin >> L >> R;

        long long int sum = 0;
        for (int i = L; i <= R; i++)
        {
            sum += i;
        }
        cout << sum << "\n";
    }

    return 0;
}
