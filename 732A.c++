#include <iostream>
using namespace std;

int main(){
  int k , r;
  cin >> k >> r;

  for(int i ;; i++){

    int lastDigit = (k * i ) % 10;

    if(lastDigit == k || lastDigit == r){
      cout << i;
      break;
    }
  }

  return 0;
}