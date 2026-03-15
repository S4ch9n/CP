#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  int answer = 0;
  for(int i = 0 ; i < t ; i++){
    int n;
    cin >> n;
    answer = (n - 1 )/2;
    cout << answer;
  }
}