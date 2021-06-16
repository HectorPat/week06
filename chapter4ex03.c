#include <stdio.h>
int main(void){
  float base, altura, perimetro, area;
  base = 3;
  altura = 5;
  perimetro = ((2*base)+(2*altura));
  area = (base*altura);
  printf("para un rectangulo de 3 x 5 pulgadas \n");
  printf("el perimetro del rectangulo es de %.1f pulgadas \nsu área es de %.1f pulgadas cuadradas \n" ,perimetro,area);  
  
  base = 6.8;
  altura = 2.3;
  perimetro = ((2*base)+(2*altura));
  area = (base*altura);
  printf("\npara utilizar otros datos se tendria que establecer nuevamente las variables con sus operaciones respectivamente \n");
  printf("\n para un rectangulo de 6.8 x 2.3 pulgadas");
  printf("\n el perimetro del rectangulo es de %.1f pulgadas \n su área es de %.1f pulgadas cuadradas" ,perimetro,area);  
  
  return 0;
}
