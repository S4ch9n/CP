#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    count += n / 100;
    n %= 100;

    count += n / 20;
    n %= 20;

    count += n / 10;
    n %= 10;

    count += n / 5;
    n %= 5;

    count += n;

    cout << count;
}


//
#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;

    int a[5] = {100, 20, 10, 5, 1};

    for(int i = 0; i < 5; i++){
        ans += n / a[i];
        n %= a[i];
    }

    cout << ans;
}