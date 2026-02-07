#include <iostream>
using namespace std;

int main(){
    int n , h; // n - number of people , h - height of fence
    cin >> n >> h;
    int v[n];
    for(int i = 0 ; i < n ; i++) cin >> v[i];
    int total_width = 0;
    for(int i = 0 ; i < n ; i++){
        if(v[i] > h) total_width += 2;
        else total_width += 1;
    }
    cout << total_width << endl;
    return 0;
}

//2nd optimized way
#include <iostream>
using namespace std;

int main(){
    int n , h , total_width = 0; // n - number of people , h - height of fence
    cin >> n >> h;
    for(int i = 0 ; i < n ; i++){
        int v;
        cin >> v;
        if(v > h) total_width += 2;
        else total_width++;
    }
    cout << total_width << endl;
    return 0;
}
