/*
8. Declare struct Fecha, declare FA(fecha actual) y FC(fecha cumple), luego se compruebe en una función si corresponde al día del cumpleaños. Mostrar un mensaje de felicitaciones de ser así.
*/
#include <iostream>
#include <ctime>

struct Fecha {
    int dia;
    int mes;
    int anio;
};

Fecha FA() {
    time_t ahora = time(0);
    struct tm *tm_local = localtime(&ahora);
    Fecha fa;
    fa.dia = tm_local->tm_mday;
    fa.mes = tm_local->tm_mon + 1;
    fa.anio = tm_local->tm_year + 1900;
    return fa;
}

Fecha FC(int dia, int mes, int anio) {
    Fecha fc;
    fc.dia = dia;
    fc.mes = mes;
    fc.anio = anio;
    return fc;
}

bool esFechaCumpleaños(Fecha fa, Fecha fc) {
    if (fa.dia == fc.dia && fa.mes == fc.mes) {
        return true;
    }
    return false;
}

int main() {
    Fecha fa = FA();
    Fecha fc = FC(12, 3, 2003);
    if (esFechaCumpleaños(fa, fc)) {
        std::cout << "¡Felicitaciones! Hoy es tu cumpleaños." << std::endl;
    } else {
        std::cout << "Hoy no es tu cumpleaños. Lamentablemente, no podrás celebrarlo hoy." << std::endl;
    }
    return 0;
}