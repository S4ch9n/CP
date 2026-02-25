#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 0, max_people = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        current = current - a + b;

        if (current > max_people)
            max_people = current;
    }

    cout << max_people;
    return 0;
}