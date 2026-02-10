#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool visited[101] = {false};

    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        visited[x] = true;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int y;
        cin >> y;
        visited[y] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";
    return 0;
}
