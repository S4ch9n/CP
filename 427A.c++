#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  int untreated = 0;
  int officer = 0;
  for(int i = 0 ; i < n ; i++){
    int x;
    cin >> x;

    if(x > 0){
      officer += x;
    }else{
      if(officer > 0) officer--;
      else untreated++;
    }
  }
  cout << untreated;
}