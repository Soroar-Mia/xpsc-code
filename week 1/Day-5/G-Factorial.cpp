#include <iostream>
using namespace std;

int factorial(long long int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int T;
    cin >> T;

    for(int i=0; i<T; i++)
    {
        int N;
        cin >> N;

        long long int result = factorial(N);
        cout << result << endl;
    }

    return 0;
}
