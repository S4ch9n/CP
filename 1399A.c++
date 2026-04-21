#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr , arr + n);
    for(int i = 0 ; i < n ; i++){
      if(arr[i + 1] - arr[i] > 1) cout << "No";
      cout << "Yes";
    }
  }
  return 0;
}