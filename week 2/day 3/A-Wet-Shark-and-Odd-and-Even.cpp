#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    vector<int> numbers(n);
    for (long long int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    sort(numbers.rbegin(), numbers.rend());

    long long int sum = 0;
    bool hasOdd = false;
    for (long long int i= 0; i < n; i++) {
        sum += numbers[i];
        if (numbers[i] % 2 != 0) {
            hasOdd = true;
        }
    }

    if (sum % 2 != 0) {
        if (hasOdd) {
            for (long long int i = 0; i < n; i++) {
                if (numbers[i] % 2 != 0) {
                    sum -= numbers[i];
                    break;
                }
            }
        } else {
            sum = 0;
        }
    }

    cout << sum << endl;

    return 0;
}
