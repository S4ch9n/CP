#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; // n = number of participants, k = cutoff position

    int scores[100]; // Assuming maximum of 100 participants
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int cutoffScore = scores[k - 1]; // Score of the k-th participant (1-based index)
    int totalParticipants = 0;

    for (int i = 0; i < n; i++) {
        // A participant advances if their score is >= cutoffScore and > 0
        if (scores[i] >= cutoffScore && scores[i] > 0) {
            totalParticipants++; 
        }
    }

    cout << totalParticipants << endl;

    return 0;
}
