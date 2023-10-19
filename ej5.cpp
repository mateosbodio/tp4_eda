/*
5. Escriba una función que reciba un vector y suma sus elementos pares, reutilizar las funciones del punto 4 para cargar y mostrar los vectores.
*/
#include <iostream>
#include <vector>

// Reutilizando la función de cargar vectores
void cargarVector(std::vector<int>& vector) {
    int n;
    std::cout << "Ingrese la cantidad de elementos del vector: ";
    std::cin >> n;

    std::cout << "Ingrese los elementos del vector: ";
    for (int i = 0; i < n; i++) {
        std::cin >> vector[i];
    }
}

// Reutilizando la función de mostrar vectores
void mostrarVector(const std::vector<int>& vector) {
    std::cout << "Elementos del vector: ";
    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl;
}

// Función que suma los elementos pares de un vector
int sumarElementosPares(const std::vector<int>& vector) {
    int suma = 0;
    for (int i = 0; i < vector.size(); i++) {
        if (vector[i] % 2 == 0) {
            suma += vector[i];
        }
    }
    return suma;
}

int main() {
    std::vector<int> vector(10);
    cargarVector(vector);
    mostrarVector(vector);
    int suma = sumarElementosPares(vector);
    std::cout << "La suma de los elementos pares del vector es: " << suma << std::endl;

    return 0;
}