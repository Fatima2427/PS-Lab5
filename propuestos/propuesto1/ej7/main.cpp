#include <iostream>
using namespace std;
#include "head.cpp"

int main()
{
    persona amigos[3];
    datos(amigos);

    int rpta=1;
    while( rpta!=0){
    cout << "Ingreaar opcion de numero de mes  \n" << "0 para terminar\n" ;
    cin >> rpta;

    preguntar(amigos, rpta);

}
}