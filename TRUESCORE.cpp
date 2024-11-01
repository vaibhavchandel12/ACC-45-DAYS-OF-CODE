#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int A, B, C, D;
        cin >> A >> B;  // Initial score
        cin >> C >> D;  // Target score

        // Check if the target score is achievable
        if (C >= A && D >= B) {
            cout << "POSSIBLE" << endl;
        } else {
            cout << "IMPOSSIBLE" << endl;
        }
    }
    return 0;
}
