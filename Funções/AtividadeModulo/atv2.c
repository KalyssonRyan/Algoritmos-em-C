/*
2 – Codifique, compile e execute um programa que leia três números. Para cada número, imprima
o dobro. Use uma função que recebe como parâmetro um número inteiro e devolve o seu dobro. O
valor calculado deve ser impresso na função principal.
*/
#include <stdio.h>
#include <locale.h>
int dobro(int n){
  int resultado;
  resultado=n*2;
  return resultado;
}
int main(){
  setlocale(LC_ALL, "portuguese");
  int num1,num2,num3;
  printf("Digite o 1° número: ");
  scanf("%d",&num1);
  printf("Digite o 2° número: ");
  scanf("%d",&num2);
  printf("Digite o 3° número: ");
  scanf("%d",&num3);
  printf("\no 1°resultado é: %d\no 2° resultado é: %d \no 3° resultado é: %d ",dobro(num1),dobro(num2),dobro(num3));  
  return 0;
}