#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  bool isEasy = true;
  for(int i = 0 ; i < n ; i++){
    int a;
    cin >> a;
    if(a == 1){
      isEasy = false;
      break;
    }
  }
  if(isEasy) cout << "easy";
  else cout << "hard";

  return 0;
}