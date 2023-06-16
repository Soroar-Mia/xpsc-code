#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    long long n;
    cin >> n;

    int count = 0;
    while (n >= 10) {
        n = sumOfDigits(n);
        count++;
    }

    cout << count << endl;

    return 0;
}
