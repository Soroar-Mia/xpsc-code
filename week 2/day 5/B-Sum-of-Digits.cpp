#include <iostream>
using namespace std;

int countSpells(string n) {
    int count = 0;
    while (n.size() > 1) {
        int sum = 0;
        for (char c : n) {
            sum += c - '0';
        }
        n = to_string(sum);
        count++;
    }
    return count;
}

int main() {
    string n;
    cin >> n;
    int result = countSpells(n);
    cout << result << endl;
    return 0;
}
