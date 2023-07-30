#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long l = 1;
        long long r = n;

        long long max_interval = 1;
        long long current_interval = 1;

        while (l <= r) {
            long long interval_lcm = lcm(current_interval, r);
            if (interval_lcm <= n) {
                max_interval = r - l + 1;
                current_interval = interval_lcm;
                l = r + 1;
            } else {
                r--;
            }
        }

        cout << max_interval << endl;
    }

    return 0;
}
