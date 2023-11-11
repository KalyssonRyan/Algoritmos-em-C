/*
3 – Faça uma função que receba por parâmetro dois valores X e Z. Calcule e retorne o resultado
de XZ para o programa principal.
Atenção, não utilize nenhuma função pronta de exponenciação.
*/
#include <stdio.h>
#include <locale.h>
int calcular(){
  int x,z,resultado;
  printf("Digite o 1° número: ");
  scanf("%d",&x);
  printf("Digite o 2° número: ");
  scanf("%d",&z);
  resultado= x*z;
  return resultado;
  
}
int main(){
  printf("o resultado é: %d",calcular());
  return 0;
}