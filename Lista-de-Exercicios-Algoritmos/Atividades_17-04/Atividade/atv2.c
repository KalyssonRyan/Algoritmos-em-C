#include <stdio.h>
#include <locale.h>
int main () {
  /* Faça um programa em C que leia um valor N inteiro e 
positivo, calcule o mostre o valor E, conforme a 
fórmula a seguir
E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!*/
  setlocale(LC_ALL, "portuguese");
  int n;
  float fat=1,e=1;
    printf("Para calcular a Fórmula \"E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!\" digite um número: ");
    scanf("%d",&n);

  for(int i=1;i<=n;i++){
    fat=fat*i;
    e=e+1/fat;
  }
  printf("O valor do fatorial é : %f\n5",fat);
  printf("O valor do número na fórmula E: %f",e);
  
  return 0;
}