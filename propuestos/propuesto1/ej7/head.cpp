#include <iostream>
using namespace std;
#include "head.h"
int  tamaño =9;
void persona::datosIngresar()
{
     cout << "\nEscriba el Nombre "
          << ":";
     cin >> nombre;
     cout << "\nEscriba el dia, mes y año "
          << ":";
     cin >> dia;
     cin >> mes;
     cin >> año;
}
void persona::display()
{
     cout << "Nombre: " << nombre << ", "
          << "Dia " << dia << ", Mes: " << mes << "Año " << año  <<"\n";
}
void persona::preguntarMes(int m)
{
     if (mes == m)
     {
          display();
     }
     else
          false;
}
void datos(persona lista[])
{
     for (int i = 0; i < tamaño; i++)
     {
          lista[i].datosIngresar();
     }
}
void preguntar(persona lista[], int m)
{
     for (int i = 0; i < tamaño; i++)
     {
          lista[i].preguntarMes(m);
     }
}
void displayGeneral(persona lista[])
{
     for (int i = 0; i < tamaño; i++)
     {
          lista[i].display();
     }
}