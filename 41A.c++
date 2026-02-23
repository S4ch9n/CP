#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    int left = 0;
    int right = s.length() - 1;

    string t2 = s;

    while(left < right){
        swap(t2[left], t2[right]);
        left++;
        right--;
    }

    bool isReverse = true;

    for(int i = 0; i < s.length(); i++){
        if(t2[i] != t[i]){
            isReverse = false;
            break;
        }
    }

    if(isReverse) cout << "YES";
    else cout << "NO";

    return 0;
}

//short code
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
  string s , t;
  cin >> s >> t;

  reverse(s.begin() , s.end());

  if(s == t) cout << 'YES';
  else cout << "NO";
}