#include <iostream>
using namespace std;

struct Fecha {
  int year;
  int month;
  int day;

  Fecha(int d, int m, int y): year{y}, month{m}, day{d}{}

  int operator-(Fecha f){
    int dif = 0;
    if(month != f.month){
      dif+=30*;
    }
    return day - f.day;
  }
};

int main(){
  Fecha hoy(3,11,2022);

  cout<<hoy.day<<" - "<<hoy.month<<" - "<<hoy.year<<'\n';
}


























