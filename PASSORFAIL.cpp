#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, X, P; // Total questions, correct answers, passing marks
        cin >> N >> X >> P;

        // Calculate Chef's total score
        int score = (X * 3) + (N - X) * (-1);

        // Output PASS if score >= P, otherwise FAIL
        if (score >= P) {
            cout << "PASS" << endl;
        } else {
            cout << "FAIL" << endl;
        }
    }

    return 0;
}
