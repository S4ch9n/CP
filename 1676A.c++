#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;  // 6-digit number as string

        int firstHalf = 0, secondHalf = 0;

        for(int i = 0; i < 3; i++) {
            firstHalf += s[i] - '0';   // convert char to int
            secondHalf += s[i + 3] - '0';
        }

        if(firstHalf == secondHalf)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}