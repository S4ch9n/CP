#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  cin >> n;

  string is = "codeforces";

  while(n--){
    char s;
    cin >> s;

    if(is.find(s) != string::npos)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}

//using map
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
  int n;
  cin >> n;
  string is = "codeforces";
  map<char , int>mpp;

  //store is into mpp
  for(int i = 0 ; i < is.size() ; i++){
    mpp[is[i]]++;
  }
  while(n--){
    char s;
    cin >> s;

    if(mpp[s] > 0) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}
