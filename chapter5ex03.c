#include <stdio.h>

int main(void) {
  float Perimetro, altura, ancho;
  printf("ingresar altura del rectangulo\n");
  scanf("%f" ,&altura);
  printf("ingresar ancho del rectangulo\n");
  scanf("%f", &ancho);
  Perimetro= ((ancho + altura)*(2));
  printf("el perimetro del rectangulo son %.2f unidades",Perimetro);

  return 0;
}
