/*
19. Realice una función que reciba un número y devuelva el factorial del mismo. El factorial de un número: es el producto del número por todos sus antecesores hasta 1. Ejemplos:
• Factorial de 0 es 1 (por definición) Se denota 0!=1
• Factorial de 1 es 1 Se denota 1!=1
• Factorial de 4= 4*3*2*1 Se denota 4!=24
• Factorial de 10= 10*9*8*7*6*5*4*3*2*1 Se denota 10!= 3.628.800
*/
#include <iostream>
using namespace std;

// Definición de la función factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    long long result = factorial(num);
    cout << "El factorial de " << num << " es: " << result << endl;
    return 0;
}