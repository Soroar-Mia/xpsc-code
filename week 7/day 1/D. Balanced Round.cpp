#include <iostream>
#include <vector>
#include <set>

using namespace std;

int maxFrogsToCatch(vector<int>& hops) {
    set<int> positions;
    int maxFrogs = 0;

    for (int i = 0; i < hops.size(); i++) {
        int position = hops[i];
        auto it = positions.upper_bound(position);

        if (it != positions.end()) {
            maxFrogs = max(maxFrogs, distance(positions.begin(), it));
        } else {
            maxFrogs = max(maxFrogs, int(positions.size()));
        }

        positions.insert(position);
    }

    return maxFrogs;
}

int
