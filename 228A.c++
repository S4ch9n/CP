#include <iostream>
using namespace std;

int main() {
    int arr[4];
    for(int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    int unique = 0;

    for(int i = 0; i < 4; i++) {
        bool isDuplicate = false;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if(!isDuplicate) unique++;
    }

    cout << 4 - unique;

    return 0;
}