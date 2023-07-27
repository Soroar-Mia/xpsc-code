#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int b, c, h;
        cin >> b >> c >> h;
        int ch=c+h;
        if(b==ch)
        {
            cout << b + (b-1) << endl;
        }
        else if(b>ch)
        {
            cout << ch + ch + 1 << endl;
        }
        else if(b<ch)
        {
            cout << b + (b-1) << endl;
        }

    }

    return 0;
}
