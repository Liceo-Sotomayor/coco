#include <iostream>
#include <string>
using namespace std;
int main() {
    bool esMayor;
    int a, b;
    cout << "ingrese un numero" << endl;
    cin >> a;
    cout << "ingrese otro numero" << endl;
    cin >> b;
    esMayor = a > b;
    if (esMayor) {
        cout << "El numero " << a << " es menor que " << b << endl;
    }
}