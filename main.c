#include <stdio.h>

int main(void) {
  float num1,num2,num3;
  float p1,p2,p3;
  float resultado;
  printf("Vamos fazer a soma da média \n");
  printf("digite a 1° notas \n");
  scanf("%f",&num1);
  printf("digite a 2° nota: \n");
  scanf("%f",&num2);
  printf("digite a 3° nota: \n");
  scanf("%f",&num3);
  printf("agora digite o 1° peso: \n");
  scanf("%f",&p1);
  printf("agora digite o 2° peso: \n");
  scanf("%f",&p2);
  printf("agora digite o 3° peso: \n");
  scanf("%f",&p3);
  resultado=(num1*p1+num2*p2+num3*p3)/(p1+p2+p3);
  printf("o resultado da media ponderada é: %0.2f",resultado);
  
  
  return 0;
}