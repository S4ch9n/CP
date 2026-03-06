#include <iostream>
#include <string>
using namespace std;

int main(){
  string s1 , s2;
  cin >> s1 >> s2;
  for(int i = 0 ; i < s1.length() ; i++){
    if(s1[i] != s2[i]) cout << "1" << " ";
    else cout << "0" << " ";
  }
  return 0;
}

//using xor :retur 1 when both value are different , otherwise 0
#include <iostream>
#include <string>
using namespace std;

int main(){
  string s1 , s2;
  cin >> s1 >> s2;
  for(int i = 0 ; i < s1.length() ; i++){
      cout << (s1[i] ^ s2[i]);
  }
  return 0;
}