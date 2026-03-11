#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 0;

    for(int i = 0; i < n; i++) {
        string present;
        cin >> present;

        if(present == "Tetrahedron") total += 4;
        else if(present == "Cube") total += 6;
        else if(present == "Octahedron") total += 8;
        else if(present == "Dodecahedron") total += 12;
        else if(present == "Icosahedron") total += 20;
    }

    cout << total;

    return 0;
}