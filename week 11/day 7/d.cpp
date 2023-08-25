#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        // Calculate the minimum number of balls needed
        // by finding the smallest k such that k*(k+1)/2 >= n
        long long k = ceil((-1.0 + sqrt(1.0 + 8.0 * n)) / 2.0);

        cout << k << endl;
    }

    return 0;
}
