#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        // Calculate the sum of all items
        int totalCost = A + B + C;

        // Find the minimum price (free item)
        int freeItem = min({A, B, C});

        // Calculate the amount to pay
        int amountToPay = totalCost - freeItem;

        // Output the result
        cout << amountToPay << endl;
    }

    return 0;
}
