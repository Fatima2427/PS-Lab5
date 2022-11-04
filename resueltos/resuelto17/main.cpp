// Utilizando estructuras en C++ mostrar como el operador sizeof genera 1 en una
// estructura vacía en C++ el comportamiento de sizeof en C es diferente al
// generar 0 en la misma situación

#include <iostream>
using namespace std;

// estructura vacia
struct Record {
  double i[5];  // double = 64 bits = 8 bytes
                // 8*5 = 40
};

// Programa principal
int main() {
  struct Record s;
  cout << sizeof(s) << endl;
  
  return 0;
}

