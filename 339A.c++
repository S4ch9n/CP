#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  string s;
  cin >> s;
  vector<int> nums;

  //extract numbers
  for(int i = 0 ; i < s.length() ; i += 2){
    nums.push_back(s[i] - '0');
  }

  //sort 
  sort(nums.begin() , nums.end());

  //print result
  for(int i = 0 ; i < nums.size() ; i++){
    if(i > 0) cout << "+";
    else cout << nums[i];
  }

  return 0;
}