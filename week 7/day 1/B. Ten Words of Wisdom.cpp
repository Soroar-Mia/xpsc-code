#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> lengths(n), qualities(n);

        int maxQualityIndex = -1;
        for (int i = 0; i < n; ++i) {
            cin >> lengths[i] >> qualities[i];
            if (lengths[i] <= 10 && (maxQualityIndex == -1 || qualities[i] > qualities[maxQualityIndex])) {
                maxQualityIndex = i;
            }
        }

        cout << maxQualityIndex + 1 << endl;
    }

    return 0;
}
