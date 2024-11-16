#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, A, B; // Number of episodes, duration of even-indexed and odd-indexed episodes
        cin >> N >> A >> B;

        // Count the number of odd-indexed episodes
        int oddEpisodes = (N + 1) / 2;

        // Count the number of even-indexed episodes
        int evenEpisodes = N / 2;

        // Calculate the total duration
        int totalDuration = oddEpisodes * B + evenEpisodes * A;

        // Print the result
        cout << totalDuration << endl;
    }

    return 0;
}
