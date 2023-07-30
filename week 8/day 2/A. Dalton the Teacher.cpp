///*******Bismillahir Rahmanir Rahim*******
#include <iostream>
#include <vector>

using namespace std;

int minMovesToMakeStudentsHappy(vector<int>& chairs) {
    int n = chairs.size();
    int moves = 0;

    for (int i = 0; i < n; ++i) {
        if (chairs[i] == i + 1) {
            ++moves;
        }
    }

    moves = (moves + 1) / 2;

    return moves;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> chairs(n);

        for (int i = 0; i < n; ++i) {
            cin >> chairs[i];
        }

        int moves = minMovesToMakeStudentsHappy(chairs);
        cout << moves << endl;
    }

    return 0;
}
