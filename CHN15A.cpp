#include <iostream>
#include <vector>
using namespace std;

// Function to count Wolverine-like minions for each test case
int countWolverineLikeMinions(int N, int K, vector<int>& characteristics) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        int newCharacteristic = characteristics[i] + K;
        if (newCharacteristic % 7 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> characteristics(N);
        for (int i = 0; i < N; i++) {
            cin >> characteristics[i];
        }

        // Count Wolverine-like minions for the current test case
        int result = countWolverineLikeMinions(N, K, characteristics);
        cout << result << endl;
    }

    return 0;
}
