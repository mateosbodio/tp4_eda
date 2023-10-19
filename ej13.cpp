/*
13. Realice una función que dada una matriz y un número de fila de la matriz devuelva el menor de los elementos almacenados en dicha fila.
*/
#include <iostream>
#include <vector>
#include <algorithm>

int find_min(std::vector<std::vector<int>>& matrix, int row) {
    return *std::min_element(matrix[row].begin(), matrix[row].end());
}

int main() {
    std::vector<std::vector<int>> matrix = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int row = 1;

    std::cout << "The smallest element in row " << row << " is " << find_min(matrix, row) << std::endl;

    return 0;
}