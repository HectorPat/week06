#include <stdio.h>

int main(void) {
  float Kilometros, Millas;
  printf("insertar los Km/h \n");
  scanf("%f" ,&Kilometros);
  Millas= ((Kilometros)*(6213712));
  printf("el resultado es %.2f en MPH", Millas);
  return 0;
}
