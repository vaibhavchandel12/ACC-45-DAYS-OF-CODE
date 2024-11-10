#include <bits/stdc++.h>
using namespace std;

int minimumFlipsToZeroSum(int n, const vector<int>& A) {
    int sumA = 0;
    for (int num : A) {
        sumA += num;
    }
    
    // If sumA is odd, it is impossible to make it zero with flips
    if (sumA % 2 != 0) {
        return -1;
    }
    
    // Return the minimum number of flips, which is abs(sumA) / 2
    return abs(sumA) / 2;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << minimumFlipsToZeroSum(N, A) << endl;
    }
    return 0;
}