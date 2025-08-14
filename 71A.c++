#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
      string s;
      cin >> s;

    if(s.length() > 10){
      int middle = s.length() - 2;
      cout << s[0] << middle << s[s.length()] - 1 << endl;
    }else{
      cout << s << endl;
    }
  }
    return 0;
}
