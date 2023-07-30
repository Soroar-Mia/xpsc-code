#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> deck(n);
    for (int i = 0; i < n; ++i) {
        cin >> deck[i];
    }

    int unlocked = 1; // Initially, only the topmost card is unlocked
    int points = 0;

    for (int i = 0; i < n; ++i) {
        // Unlock the first v locked cards in the deck from the top
        if (deck[i] >= unlocked) {
            unlocked = min(i + 1, n); // Unlock all the locked cards if there are less than v locked cards in the deck
        }

        // Earn v victory points
        points += deck[i];

        // Remove the card from the deck (unlocking it)
        --unlocked;

        // If there are no more locked cards, break the loop
        if (unlocked == 0) {
            break;
        }
    }

    cout << points << endl;
    return 0;
}
