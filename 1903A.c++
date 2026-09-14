#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int &x : a)
            cin >> x;

        bool sorted = true;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                sorted = false;
                break;
            }
        }

        if (k >= 2 || sorted)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}