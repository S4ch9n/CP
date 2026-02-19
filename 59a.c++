#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin >> s;
  int upper = 0 , lower = 0;
  for(int i = 0 ; i < s.length() ; i++){
    if(s[i] >= 'A' && s[i] <= 'Z') upper++;
    else lower++;
  }
  for(int i = 0 ; i < s.length() ; i++){
    if(upper == lower){
      s[i] = s[i] + 32;
    }else{
      s[i] = s[i] - 32;
    }
  }
  cout << s << endl;
  return 0;
}