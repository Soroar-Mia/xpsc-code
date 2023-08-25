#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1000000;
    vector<int> a(n, 0);
    a[0] = a[1] = 1

    for(int i = 2; i * i < n; i++)
    {
        if(a[i] == 0)
        {
            for(int j = i * i; j < n; j += i)
            {
                a[j] = 1;
            }
        }
    }

    int x;
    cin >> x;
    long long int b, sq;
    for(int i = 0; i < x; i++)
    {
        cin >> b;
        sq = sqrt(b);
        if(b == 1) cout << "NO" << endl;
        else if((sq * sq == b) && (a[sq] == 0) && (a[(int)sq] == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
