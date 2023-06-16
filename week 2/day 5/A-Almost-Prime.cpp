#include<bits/stdc++.h>
using namespace std;


vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return isPrime;
}

int countAlmostPrimes(int n) {
    vector<bool> isPrime = sieve(n);
    vector<int> primeCount(n + 1, 0);

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i; j <= n; j += i) {
                primeCount[j]++;
            }
        }
    }

    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (primeCount[i] == 2) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    int result = countAlmostPrimes(n);
    cout << result << endl;

    return 0;
}
