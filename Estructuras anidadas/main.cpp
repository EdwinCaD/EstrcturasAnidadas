///EJEMPLO DE ESTRUCTURAS ANIDADAS EN C++

#include <iostream>

using namespace std;

struct fecha
{
    int dia;
    int mes;
    int anio;
} ;

struct alumno
{
    string nombre;
    fecha fecha_nacimiento;
};

int main()
{
    alumno x;

    cout << "Nombre: ";
    cin >> x.nombre;
    cout << "Fecha de nacimiento..." << endl;
    cout << "Dia: ";
    cin >> x.fecha_nacimiento.dia;
    cout << "Mes: ";
    cin >> x.fecha_nacimiento.mes;
    cout << "Anio: ";
    cin >> x.fecha_nacimiento.anio;

    cout << endl;
    cout << "Los datos son..." << endl;
    cout << "Nombre: " << x.nombre << endl;
    cout << "Fecha de nacimiento..." << endl;
    cout << x.fecha_nacimiento.dia << "/"
         << x.fecha_nacimiento.mes << "/"
         << x.fecha_nacimiento.anio;

    return 0;
}
