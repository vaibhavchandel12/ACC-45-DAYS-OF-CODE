#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int A, B;
        cin >> A >> B;
        
        int C = 21 - (A + B); // Calculate the required third number
        
        if (C >= 1 && C <= 10) {
            cout << C << endl; // Output C if it's within the valid range
        } else {
            cout << -1 << endl; // Output -1 if there's no valid C
        }
    }
    return 0;
}
