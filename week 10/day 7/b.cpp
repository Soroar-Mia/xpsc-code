#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numTestCases;
    cin >> numTestCases;

    while (numTestCases--)
    {
        long long totalItems, maxItemsPerBox, itemsForDiscount, itemsPerRegularBox;
        cin >> totalItems >> maxItemsPerBox >> itemsForDiscount >> itemsPerRegularBox;

        long long neededBoxes = ceil((double)(totalItems - itemsForDiscount) / maxItemsPerBox);

        if (neededBoxes * maxItemsPerBox > totalItems)
        {
            neededBoxes--;
        }

        long long ans = (totalItems < itemsForDiscount || maxItemsPerBox * itemsPerRegularBox == totalItems)
                        ? 0
                        : (neededBoxes <= itemsPerRegularBox)
                        ? (itemsForDiscount >= (totalItems - (neededBoxes) * maxItemsPerBox))
                        ? 0
                        : (totalItems - (neededBoxes) * maxItemsPerBox) - itemsForDiscount
                        : (itemsForDiscount >= (totalItems - (neededBoxes) * maxItemsPerBox))
                        ? neededBoxes - itemsPerRegularBox
                        : neededBoxes - itemsPerRegularBox + (totalItems - (neededBoxes) * maxItemsPerBox) - itemsForDiscount;

        cout << ans << endl;
    }

    return 0;
}
