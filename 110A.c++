#include <iostream>
using namespace std;

int main(){
  string n;
  cin >> n;
  int count = 0;
  for(int i = 0 ; i < n.length() ; i++){
    if((n[i] == '4') && n[i] == '7') count++;
  }
  bool lucky = true;
  while(count > 0){
    int digit = count % 10;
    if(digit != 4 && digit != 7){
      lucky = false;
      break;
    }
  }
  if(lucky) cout << "yes";
  else cout << "no";

  return 0;
}