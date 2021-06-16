#include <stdio.h>

int main(void) {
  int Tminutos,Horas,Minutos;
  printf("ingrese los minutos\n");
  scanf("%d",&Tminutos);
  Horas=(Tminutos/60);
  Minutos=(Tminutos%60);
  printf("el resultado son %d horas y %.2d minutos",Horas,Minutos);
  
  return 0;
}
