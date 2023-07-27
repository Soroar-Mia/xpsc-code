///******* Bismillahir Rahmanir Rahim ********
///*** Read in the name of Allah, who created you ****
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0;i < n;i++)
        cin >> a[i];
    pbds<long long> p;
    vector<long long> inv(n);

    for (int i = n - 1;i >= 0;i--)
    {
        if (i == (n - 1))
            p.insert(a[i]);
        else
        {
            inv[i] = p.order_of_key(a[i]);
            p.insert(a[i]);
        }
    }
    p.clear();
    long long ans = 0;
    for (int j = 0;j < n;j++)
    {
        if (j == 0)
            p.insert(a[j]);
        else
        {
            long long less = p.order_of_key(a[j]);
            long long big = p.size() - less;
            ans += (big * inv[j]);
            p.insert(a[j]);
        }
    }
    cout << ans << '\n';
    return 0;
}
