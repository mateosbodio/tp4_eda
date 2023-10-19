/*
16. Escriba una función llamada maximo() que devuelva el valor máximo de tres argumentos que se transmitan a la función cuando sea llamada. Suponga que los 3 argumentos serán del tipo float.
*/
#include <iostream>
#include <cmath>

float maximo(float a, float b, float c) {
    float max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    float a, b, c;

    std::cout << "Introduzca tres números: ";
    std::cin >> a >> b >> c;

    float resultado = maximo(a, b, c);
    std::cout << "El valor máximo es: " << resultado << std::endl;

    return 0;
}