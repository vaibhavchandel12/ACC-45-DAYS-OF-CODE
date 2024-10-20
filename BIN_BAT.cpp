#include <iostream>
#include <cmath>  // For log2 function
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;
        
        // Calculate number of rounds
        int rounds = log2(N);
        
        // Total time = Time for all rounds + Time for breaks between rounds
        int total_time = (A * rounds) + (B * (rounds - 1));
        
        // Output the result for this test case
        cout << total_time << endl;
    }
    
    return 0;
}
