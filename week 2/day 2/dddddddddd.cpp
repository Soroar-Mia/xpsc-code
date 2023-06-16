#include<bits/stdc++.h>
using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;

    int length = 1;
    while (X * 2 <= Y) {
        X *= 2;
        cout << X <<endl;
        length++;
    }

    cout << length << endl;

    return 0;
}
