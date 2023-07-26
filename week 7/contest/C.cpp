#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool canFormPath(int n, int k, const vector<int>& colors) {
    unordered_map<int, int> colorCounts;
    vector<int> blockSizes;

    for (int i = 0; i < n; i++) {
        colorCounts[colors[i]]++;
        if (colorCounts[colors[i]] % k == 0) {
            blockSizes.push_back(k);
        }
    }

    int totalBlocks = blockSizes.size();
    int remainingTiles = n;
    for (int blockSize : blockSizes) {
        if (remainingTiles < blockSize) {
            return false;
        }
        remainingTiles -= blockSize;
    }

    return remainingTiles == 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> colors(n);
        for (int i = 0; i < n; i++) {
            cin >> colors[i];
        }

        if (canFormPath(n, k, colors)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
