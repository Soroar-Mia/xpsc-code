#include <iostream>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define soroar tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

int main()
{
    soroar sr;

    sr.insert(3);
    sr.insert(2);
    sr.insert(4);
    sr.insert(1);
    sr.insert(5);

    for (int i = 0; i < sr.size(); i++)
    {
        cout << *(sr.find_by_order(i)) << " ";
    }
    cout << endl;

    for (int i = 0; i < sr.size(); i++)
    {
        cout << sr.order_of_key(i)<< endl;
    }
    cout << endl;


    return 0;
}
