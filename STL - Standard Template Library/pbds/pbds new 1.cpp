#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;;
template <typename T> using soroar = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    soroar<int> sr;
    for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sr.insert(a[i]);
        }
     for (int i = 0; i < sr.size(); i++)
    {
        cout << *(sr.find_by_order(i)) << " ";
    }
    cout << endl;

    long long ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        cout<<sr.order_of_key(a[i])<<endl;
    }
    cout << ans << '\n';

    return 0;
}

