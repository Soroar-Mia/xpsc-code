#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        int a[n], b[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            int ans = 0;
            int s = a[i];
            int num = s; // Create a separate variable to iterate over
            while(num > 0)
            {
                int ss = num % 2;
                num = num / 2; // Change 's' to 'num' here
                if(ss == 1)
                {
                    ans++;
                }
            }
            b[i] = ans;
        }

        for(int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << "\n"; // Add a newline after printing the array
    }
}
