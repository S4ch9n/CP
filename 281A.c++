#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin >> s;
  // “If the first character lies in the ASCII range of lowercase letters ('a' to 'z'), then convert it to uppercase by subtracting 32.”
  if(s[0] >= 'a' && s[0] <= 'z'){
    s[0] = s[0] - 32;
  }
  cout << s;
  return 0;
}