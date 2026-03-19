#include <iostream>
#include <string>
using namespace std;

int main(){
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
   
  int hash[26] = {0};
  for(int i = 0 ; i < s1.length() ; i++){
    hash[s1[i] - 'A']++;
  }
  for(int i = 0 ; i < s2.length() ; i++){
    hash[s2[i] - 'A']++;
  }
  for(int i = 0 ; i < s3.length() ; i++){
    hash[s3[i] - 'A']--;
  }

  //check is hash is empty or not
  for(int i = 0 ; i < 26 ; i++){
    if(hash[i] != 0){
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;

}