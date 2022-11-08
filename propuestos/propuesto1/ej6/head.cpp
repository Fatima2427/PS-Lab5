#include <iostream>
using namespace std;
#include "head.h"
void persona::datosIngresar()
{
    cout << "Escriba el Nombre "
         << ":";
    cin >> nombre;
    cout << "\nEscriba el Apellido "
         << ":";
    cin >> apellido;
    cout << "\nEscriba la Edad de "
         << ":";
    cin >> edad;
}
void persona::display()
{
    cout << "Nombre: " << nombre << ", "
         << "Apellido: " << apellido << ", Edad: " << edad;
}
