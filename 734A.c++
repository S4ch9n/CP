#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int anton = 0, danik = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'A') anton++;
        else if(s[i] == 'D') danik++;
    }

    if(anton == danik) cout << "Friendship";
    else if(anton > danik) cout << "Anton";
    else cout << "Danik";

    return 0;
}

//optimal
#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int anton = 0, danik = 0;

    for(char c : s) {
        if(c == 'A') anton++;
        else danik++;
    }

    if(anton > danik) cout << "Anton";
    else if(danik > anton) cout << "Danik";
    else cout << "Friendship";

    return 0;
}
