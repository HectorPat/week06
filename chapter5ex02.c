#include <stdio.h>

int main(void) {
  float Volume, Radio;
  const float pi=3.1416;
  printf("igresar el radio de la esfera\n");
  scanf("%f", &Radio);
  Volume= (((1.3333)*(pi))*((Radio)*(Radio)*(Radio)));
  printf("el volumen de la esfera es %.2f unidades \n", Volume);

  return 0;
}
