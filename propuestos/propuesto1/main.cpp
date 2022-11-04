#include <iostream>
using namespace std;

int meses_dias[] = {
31, // enero
28, // febrero
31, // marzo
30, // abril
31, // mayo
30, // junio
31, // julio
31, // agosto
30, // setiembre
31, // octubre
30, // noviembre
31  // diciembre
};

struct Fecha {
  int year;
  int month;
  int day;

  Fecha(int d, int m, int y) : year{y}, month{m}, day{d} {}

  // sin condiderar años bisiestos y con todos los meses con 30 dias...
  int operator-(Fecha f) {

    int year_duracion = 365;
    int mont_duracion = 30;
    
    int dif = 0;
    if (year != f.year) {
      dif += 365 * (year - f.year);
    }
    if (month != f.month) {
      dif += 30 * (month - f.month);
    }
    dif += day - f.day;
    return dif;
  }
};

int main() {
  Fecha hoy(3, 11, 2022);
  Fecha otroDia(27, 10, 2023);

  cout << hoy.day << " - " << hoy.month << " - " << hoy.year << '\n';
  cout << otroDia.day << " - " << otroDia.month << " - " << otroDia.year
       << '\n';

  cout << "\ndiferencia: " << otroDia - hoy << '\n';
}
