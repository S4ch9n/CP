#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n , k , l , c , d , p ,nl ,np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int toast = (k * l) / nl; //total drinks
  int limes = c * d; // total limes
  int salt = p / np; // total salt

  int result = min(toast , min(limes , salt)) / n;

  cout << result;

  return 0;
}