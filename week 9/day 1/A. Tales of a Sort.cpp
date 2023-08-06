#include <iostream>
#include <vector>
#include <algorithm>

int countOperations(std::vector<int>& a) {
    int operations = 0;
    while (!std::is_sorted(a.begin(), a.end())) {
        for (int i = 1; i < a.size(); ++i) {
            a[i] = std::max(0, a[i - 1]);
        }
        operations++;
    }
    return operations;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }
        std::cout << countOperations(a) << std::endl;
    }

    return 0;
}
