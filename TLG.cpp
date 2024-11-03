#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int player1_cumulative = 0;
    int player2_cumulative = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < n; ++i) {
        int score1, score2;
        cin >> score1 >> score2;

        // Update cumulative scores
        player1_cumulative += score1;
        player2_cumulative += score2;

        // Calculate the current lead and the leader
        int current_lead = abs(player1_cumulative - player2_cumulative);
        int current_leader = (player1_cumulative > player2_cumulative) ? 1 : 2;

        // Check if this is the maximum lead
        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = current_leader;
        }
    }

    // Output the winner and the maximum lead
    cout << winner << " " << max_lead << endl;

    return 0;
}
