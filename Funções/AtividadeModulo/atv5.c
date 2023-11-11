/*
 Codifique, compile e execute um programa na linguagem C que leia dois elementos e os passe
como parâmetros em uma função soma que deverá retornar o valor da soma desses dois
elementos. Em seguida imprima o resultado na função principal.
*/
#include <stdio.h>
#include <locale.h>
int soma(int n1,int n2){
  int resultado=0;
  resultado+=n1+n2;

  return resultado;
}
int main(){
  setlocale(LC_ALL, "portuguese");
  int num1,num2;
  printf("Digite o 1° número: ");
  scanf("%d",&num1);
  printf("Digite o 2° número: ");
  scanf("%d",&num2);
  printf("O resultado é : %d",soma(num1,num2));
  return 0;
}