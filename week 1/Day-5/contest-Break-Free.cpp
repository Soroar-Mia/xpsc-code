#include <iostream>
#include <stack>
#include <string>

using namespace std;

string convertToRegularBracketSequence(const string& S) {
    string T;
    stack<char> brackets;

    for (char ch : S) {
        if (brackets.empty()) {
            T += '(';
            brackets.push('(');
        } else if (ch == brackets.top()) {
            T += ')';
            brackets.pop();
        } else {
            T += '(';
            brackets.push('(');
        }
    }

    while (!brackets.empty()) {
        T += ')';
        brackets.pop();
    }

    return T;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string S;
        cin >> S;

        string T = convertToRegularBracketSequence(S);

        // Check if T is a regular bracket sequence
        bool isRegular = true;
        stack<char> brackets;

        for (char ch : T) {
            if (ch == '(') {
                brackets.push('(');
            } else if (ch == ')') {
                if (brackets.empty() || brackets.top() != '(') {
                    isRegular = false;
                    break;
                }
                brackets.pop();
            }
        }

        if (isRegular) {
            cout << "YES" << endl;
            cout << T << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
