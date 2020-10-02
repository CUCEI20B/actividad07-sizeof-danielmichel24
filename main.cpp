#include <iostream>

using namespace std;

int main() {
    string cadena;

    getline(cin, cadena);
    if (cadena=="int"){
        cout << sizeof(int) << endl;
    }
    if (cadena=="char"){
        cout << sizeof(char) << endl;

    }

    return 0;
}
