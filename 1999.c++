#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  cin >> n;
  while(n--){
    string s;
    cin >> s;
    //convert string to num;
    int sum = (s[0] - '0') + (s[1] - '0');
    cout << sum << endl;
  }
  return 0;
}