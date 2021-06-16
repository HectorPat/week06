#include <stdio.h>

int main(void) {
  int Hora, Minutos, Tminutos;
  printf("ingresar numero de horas\n");
  scanf("%d" ,&Hora);
  printf("ingresar numero de minutos\n");
  scanf("%d",&Minutos);
  Tminutos= (((Hora)*(60))+(Minutos)); 
  printf("tienes en total %d minutos\n", Tminutos);

  return 0;
}
