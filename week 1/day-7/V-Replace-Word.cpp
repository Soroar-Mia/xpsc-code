#include<bits/stdc++.h>

using namespace std;

int main() {
    string S;
    getline(cin, S);

    string searchStr = "EGYPT";
    string replaceStr = " ";

    size_t dos = S.find(searchStr);
    while (dos != string::npos) {
        S.replace(dos, searchStr.length(), replaceStr);
        dos = S.find(searchStr, dos + replaceStr.length());
    }

    cout << S << endl;

    return 0;
}
