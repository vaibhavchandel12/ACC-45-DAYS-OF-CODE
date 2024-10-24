#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    
    while (T--) {
        int N;
        cin >> N; // Number of terms in the polynomial
        
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i]; // Coefficients of the polynomial
        }
        
        // Find the highest index with a non-zero coefficient
        int degree = 0;
        for (int i = N - 1; i >= 0; --i) {
            if (A[i] != 0) {
                degree = i;
                break;
            }
        }
        
        cout << degree << endl; // Output the degree of the polynomial
    }
    
    return 0;
}
