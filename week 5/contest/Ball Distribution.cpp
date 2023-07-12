#include <bits/stdc++.h>
#define ll long long
using namespace std;

int minimumBoxesWithMBalls(int N, int M, vector<int>& balls) {
    sort(balls.begin(), balls.end(), greater<int>());

    int boxesWithMBalls = 0;
    int totalBalls = 0;

    for (int i = 0; i < M; i++) {
        totalBalls += balls[i];

        if (totalBalls >= M) {
            boxesWithMBalls++;
            totalBalls = 0;
        }
    }

    return boxesWithMBalls;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> balls(M);
        for (int i = 0; i < M; i++) {
            cin >> balls[i];
        }

        int result = minimumBoxesWithMBalls(N, M, balls);
        cout << result << endl;
    }

    return 0;
}
