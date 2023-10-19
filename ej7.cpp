/*
7. En la función main, llamar a otra función Friends que reciba un arreglo de estructuras y registre datos de 6 amigo/as con: nombre, sexo, si es soltero, y su Instagram. Luego un procedimiento muestra los datos de los soltera/os. Y una función medioPomelo, que carga el amigoElegido=“ ” (paso por referencia) el primer soltero menor a 30 años; debe además, retornar su Instagram.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Amigo {
    std::string nombre;
    char sexo;
    bool soltero;
    std::string instagram;
};

void mostrarSoltera(const Amigo& amigo) {
    std::cout << "Nombre: " << amigo.nombre << ", Sexo: " << amigo.sexo 
              << ", Soltero: " << (amigo.soltero ? "Sí" : "No") << ", Instagram: " << amigo.instagram << std::endl;
}

void mostrarSolteros(const std::vector<Amigo>& amigos) {
    std::cout << "Soltera/os: " << std::endl;
    for (const auto& amigo : amigos) {
        if (amigo.soltero) {
            mostrarSoltera(amigo);
        }
    }
}

void medioPomelo(const std::vector<Amigo>& amigos, Amigo& amigoElegido) {
    int menorEdad = 100;
    for (const auto& amigo : amigos) {
        if (amigo.soltero && amigo.nombre.size() <= 10) {
            mostrarSoltera(amigo);
            if (amigo.nombre.size() < menorEdad) {
                menorEdad = amigo.nombre.size();
                amigoElegido = amigo;
            }
        }
    }
}

int main() {
    std::vector<Amigo> amigos = {{"Juan", 'M', true, "juanito"},
                                 {"Ana", 'F', true, "anita"},
                                 {"Pedro", 'M', true, "pedrito"},
                                 {"Carla", 'F', true, "carlita"},
                                 {"Susana", 'F', true, "susanita"},
                                 {"Pablo", 'M', true, "pablito"}};

    mostrarSolteros(amigos);

    Amigo amigoElegido = {"", ' ', false, ""};
    medioPomelo(amigos, amigoElegido);

    std::cout << "Amigo elegido por medio pomelo: " << amigoElegido.nombre << std::endl;

    return 0;
}