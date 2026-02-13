#include <iostream>
#include <string>
using namespace std;
int main(){
  string s1,s2;
  cin >> s1 >> s2;
  for(int i = 0 ; i < s1.length() - 1 ; i++){
    if(s1[i] >= 'A' && s1[i] <= 'Z'){
      s1[i] = s1[i] + 32;
    
    if(s2[i] >= 'A' && s2[i] <= 'Z'){
      s2[i] = s2[i] + 32;
    }  
    }
  }

  //compare string
  for(int i = 0 ; i < s1.length() - 1 ; i++){
    if(s1[i] < s2[i]){
      cout << "-1";
      return 0;
    }
    else if(s1[i] > s2[i]){
      cout << "1";
      return 0;
    }
    else cout << "0";
  }

  return 0;
}