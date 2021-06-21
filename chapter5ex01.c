#include <stdio.h>

int main(void) {
 float Cen,Fa;
 printf("escriba el la temperatura en Centrigrados \n");
 scanf("%f", &Cen);
  Fa= ( ((9*5)*(Cen))+32 );
  printf("la temperatura en fahrenheit es de %f° \n", Fa); 
  return 0;
}
