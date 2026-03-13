#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i % 2 != 0){
                cout << "#";
            }
            else{
                if((i / 2) % 2 == 1){   // snake going right
                    if(j == m) cout << "#";
                    else cout << ".";
                }
                else{                   // snake going left
                    if(j == 1) cout << "#";
                    else cout << ".";
                }
            }

        }
        cout << endl;
    }
}



//
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    bool right = true;

    for(int i = 1; i <= n; i++) {

        if(i % 2 == 1) {
            for(int j = 0; j < m; j++)
                cout << "#";
        }
        else {
            if(right) {
                for(int j = 0; j < m-1; j++)
                    cout << ".";
                cout << "#";
            }
            else {
                cout << "#";
                for(int j = 0; j < m-1; j++)
                    cout << ".";
            }

            right = !right;
        }

        cout << endl;
    }
}