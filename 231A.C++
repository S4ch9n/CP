#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of problems
    int count = 0;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        // If at least two friends are sure about the solution
        if (a + b + c >= 2) {
            count++;
        }
    }

    // Output the number of problems they will solve
    cout << count << endl;

    return 0;
}
