#include <iostream>
#include <set>
using namespace std;

int main(){
  string s;
  getline(cin , s);
  set<char> st;
  
  for(int i = 0 ; i < s.length() ; i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
      st.insert(s[i]);
    }
  }
  cout << st.size();
}


///
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<char> s;
    char c;

    while(cin >> c)
        if(c >= 'a' && c <= 'z')
            s.insert(c);

    cout << s.size();
}