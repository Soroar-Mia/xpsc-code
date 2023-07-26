#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;

        vector<int> heights(n);
        for (int i = 0; i < n; ++i) {
            cin >> heights[i];
        }

        int count = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (j * k != heights[i] - H && j * k != H - heights[i]) {
                    // The height difference doesn't match, continue to the next step.
                    continue;
                }

                // The height difference between the person and the step is equal to the height difference between the steps.
                count++;
                break; // We only need to find one valid step for the person.
            }
        }

        cout << count << endl;
    }

    return 0;
}
