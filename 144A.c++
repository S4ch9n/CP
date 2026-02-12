#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int soldiers[n];
  for(int i = 0 ; i < n ; i++) cin >> soldiers[i];

  int max_value = soldiers[0] , min_value = soldiers[0];
  int max_pos = 0 , min_pos = 0;
  for(int i = 0 ; i < n ; i++){
    if(soldiers[i] > max_value){
      max_value = soldiers[i];
      max_pos = i;
    }
    if(soldiers[i] <= min_value){
      min_value = soldiers[i];
      min_pos = i;
    }
  }
  int ans = max_pos + (n - 1 - min_pos);
  if(max_pos > min_pos) ans--;

  cout << ans << endl;

  return 0;
}