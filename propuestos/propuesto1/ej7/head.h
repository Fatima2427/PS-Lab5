#include <iostream>
using namespace std;
struct persona
{
    char nombre[20];
    int dia;
    int mes;
    int año;


    void datosIngresar();
    void preguntarMes(int m );
    void display();
};

