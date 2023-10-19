/*
4. Realiza una función que tome como parámetros un vector de números y su tamaño, y cambie el signo de los elementos del vector. Hacer otra función que muestra el vector.
*/
#include <iostream>
#include <vector>

void cambiarSigno(std::vector<int>& vector, int size) {
    for (int i = 0; i < size; i++) {
        vector[i] = -vector[i];
    }
}

void mostrarVector(const std::vector<int>& vector, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vector = {1, 2, 3, 4, 5};
    int size = vector.size();

    std::cout << "Vector original: ";
    mostrarVector(vector, size);

    cambiarSigno(vector, size);

    std::cout << "Vector con signos cambiados: ";
    mostrarVector(vector, size);

    return 0;
}