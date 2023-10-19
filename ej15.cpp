/*
15. Haga un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido por el usuario. Ejemplo, si introducís el número 256.879, debería desplegarse el número 0.879.
*/
#include <iostream>
#include <cmath>

double frac(double num) {
    return num - floor(num);
}

int main() {
    double num;
    std::cout << "Ingrese un numero: ";
    std::cin >> num;
    std::cout << "La parte fraccionaria del numero ingresado es: " << frac(num) << std::endl;
    return 0;
}