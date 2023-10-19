/*
14. Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una potencia en número entero positivo y despliegue el resultado. El número entero positivo deberá ser el segundo valor transmitido a la función.
*/
#include <iostream>
#include <cmath>

long long funpot(int base, int exp) {
    return pow(base, exp);
}

int main() {
    int base, exp;
    std::cout << "Ingrese el valor base: ";
    std::cin >> base;
    std::cout << "Ingrese el valor exponente: ";
    std::cin >> exp;
    std::cout << "El resultado es: " << funpot(base, exp) << std::endl;
    return 0;
}