/*
12. Cree una estructura Persona que tenga un vector de 30 caracteres, y su edad. Declare una variable de tipo Persona, y use una función pedirDatos que la cargue. Use getline para cargar el nombre. Otra función mostrarDatos que reciba la estructura y la muestre. Declare el prototipo de las funciones pedirDatos y mostrarDatos. Pruébelas desde el menú principal.
*/
#include <iostream>
#include <string>

// Declaracion de la estructura Persona
struct Persona {
    char nombre[30];
    int edad;
};

// Prototipos de las funciones
void pedirDatos(Persona &);
void mostrarDatos(const Persona &);

int main() {
    int opcion;
    Persona p;

    do {
        std::cout << "1. Cargar datos" << std::endl;
        std::cout << "2. Mostrar datos" << std::endl;
        std::cout << "3. Salir" << std::endl;
        std::cout << "Ingrese una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                pedirDatos(p);
                break;
            case 2:
                mostrarDatos(p);
                break;
            case 3:
                std::cout << "Hasta luego!" << std::endl;
                break;
            default:
                std::cout << "Opcion no valida" << std::endl;
                break;
        }
    } while (opcion != 3);

    return 0;
}

// Implementacion de la funcion pedirDatos
void pedirDatos(Persona &p) {
    std::cout << "Ingrese su nombre: ";
    std::getline(std::cin, p.nombre);
    std::cout << "Ingrese su edad: ";
    std::cin >> p.edad;
}

// Implementacion de la funcion mostrarDatos
void mostrarDatos(const Persona &p) {
    std::cout << "Nombre: " << p.nombre << std::endl;
    std::cout << "Edad: " << p.edad << std::endl;
}