///******** Bismillahir Rahmanir Rahim *******

#include<bits/stdc++.h>
using namespace std;

double calculateProbability(int A, int B, int C, int X) {
    if (X <= A) {
        return 1.0;
    } else if (X > B) {
        return 0.0;
    } else {
        int eligibleParticipants = B - A;
        int totalParticipants = 1000 - A + 1;
        double probability = static_cast<double>(C) / eligibleParticipants;
        return probability;
    }
}

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    double probability = calculateProbability(A, B, C, X);

    cout << fixed << setprecision(12) << probability << endl;

    return 0;
}
