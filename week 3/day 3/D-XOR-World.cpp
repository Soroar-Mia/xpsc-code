#include<bits/stdc++.h>
using namespace std;


int main() {
    long long A, B;
    cin >> A >> B;

    long long xorA = 0;
    long long xorB = 0;

    if (A > 0) {
        long long aMod4 = (A - 1) % 4;
        if (aMod4 == 0)
            xorA = A - 1;
        else if (aMod4 == 1)
            xorA = 1;
        else if (aMod4 == 2)
            xorA = A;
        else
            xorA = 0;
    }

    if (B > 0) {
        long long bMod4 = B % 4;
        if (bMod4 == 0)
            xorB = B;
        else if (bMod4 == 1)
            xorB = 1;
        else if (bMod4 == 2)
            xorB = B + 1;
        else
            xorB = 0;
    }

    long long int result = xorA ^ xorB;
    cout << result << endl;

    return 0;
}
