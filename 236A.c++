#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;

    for(int i = 0; i < s.length(); i++){
        bool unique = true;

        for(int j = 0; j < i; j++){
            if(s[i] == s[j]){
                unique = false;
                break;
            }
        }

        if(unique) count++;
    }

    if(count % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

    return 0;
}



//optinmized way
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool seen[26] = {false};
    int count = 0;

    for(int i = 0; i < s.length(); i++){
        int index = s[i] - 'a';

        if(seen[index] == false){
            seen[index] = true;
            count++;
        }
    }

    if(count % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

    return 0;
}
