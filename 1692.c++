#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  while(n--){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int count = 0;
    if(b > a) count++;
    if(c > a) count++;
    if(d > a) count++;

    cout << count << endl;
  }
}



//simple
#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  while(n--){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int count = (b > a) + (c > a) + (d > a);
    cout << count << endl;
  }
  return 0;
}