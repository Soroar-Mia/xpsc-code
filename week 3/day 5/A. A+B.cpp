#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
        string a = s.substr(0, 1);
        string b = s.substr(2, 1);
        int num1 = stoi(a);
        int num2 = stoi(b);
        cout << (num1 + num2)<<endl;
    }
    return 0;
}

