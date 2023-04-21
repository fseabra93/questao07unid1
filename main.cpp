#include <iostream>
#include "myHeader.hpp"
using namespace std;

int main() {
    int base, expoente;

    cout << "Base: ";
    cin >> base;

    cout << "Elevado a: ";
    cin >> expoente;

    int resultado = potencia(base, expoente);

    cout << base << "^" << expoente << " = " << resultado << endl;

    return 0;
}