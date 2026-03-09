#include <iostream>
#include <set>
#include <cctype>
using namespace std;


//using set
int main() {
    int n;
    string s;
    
    cin >> n;
    cin >> s;
    
    set<char> letters;
    
    for(char c : s) {
        letters.insert(tolower(c));
    }
    
    if(letters.size() == 26)
        cout << "YES";
    else
        cout << "NO";
}

// using boolean
#include <iostream>
#include <set>
#include <cctype>
#include <algorithm>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  bool seen[26] = {false};
  
  //convert to lower
  for(int i = 0 ; i < n ; i++){
    if(s[i] >= 'A' && s[i] <= 'Z'){
      s[i] = s[i] + 32;
      seen[i - 'a'] = true; 
    }
  }
  
  for(int i = 0 ; i < n ; i++){
    if(!seen[i]){
      cout << 'NO';
      return 0;
    }
  }
  cout << "YES";
}