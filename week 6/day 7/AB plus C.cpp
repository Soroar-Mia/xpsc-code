///******** Bismillahir Rahmanir Rahim *******

#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
            cout << -1 << "\n";
        else
        {
            if (n <= 1e6)
                cout << 1 << " " << 1 << " " << n - 1 << "\n";
            else if (n > 1e6 && n % 1000000!=0)
                cout << 1000000 << " " << n / 1000000 << " " << n % 1000000 << "\n";
            else
                cout << 1000000 << " " << n / 1000000 - 1 << " " << 1000000 << "\n";
        }
    }
    return 0;
}



/*


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;

        long long a, b, c, root;

        if(n == 1)
            cout << "-1\n";
        else
        {
            root = sqrt(n);

            if(root * root == n)
            {
                a = root - 1;
                b = root - 1;
                c = n - a * b;
            }
            else
            {
                a = root;
                b = root;
                c = n - a * b;
            }
            if(c > 1000000)
            {
                while(c > 1000000)
                {
                    a++;
                    c = n - a * b;
                }
            }
            cout << a << " " << b << " " << c << "\n";
        }
    }
}
*/
