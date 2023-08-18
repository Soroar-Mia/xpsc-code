#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int count01 = 0; // Count of subsequences 01
    int count10 = 0; // Count of subsequences 10

    // Counting the initial occurrences of 01 and 10 subsequences
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            count01 += count10; // For every '0', we can form count10 new subsequences 01
        } else {
            count10++; // Increment count of 10 subsequences
        }
    }

    int minSwaps = min(count01, count10);

    cout << minSwaps << endl;

    return 0;
}
