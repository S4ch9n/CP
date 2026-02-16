#include <iostream>
using namespace std;

int main(){
  int n1 , n2 , count = 0;
  cin >> n1 >> n2;
  while(n1 <= n2){
    n1 *= 3;
    n2 *= 2;
    count++;
  }
  cout << count;
}