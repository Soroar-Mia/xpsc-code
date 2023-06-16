#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}

int main() {
    string N;
    cin >> N;

    string reversedN = N;
    reverse(reversedN.begin(), reversedN.end());

    size_t leadingZeroes = reversedN.find_first_not_of('0');
    reversedN = reversedN.substr(leadingZeroes);

    cout << reversedN << endl;

    if (isPalindrome(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
