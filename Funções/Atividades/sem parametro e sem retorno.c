#include <stdio.h>

void exponencial(){
  int num,exp,resultado;
  printf("Digite um número: ");
  scanf("%d",&num);
  printf("digite o exponente: ");
  scanf("%d",&exp);
  for(int i=0; i < exp; i++){
    resultado = resultado * num;
  }
  printf("O resultado eh : %d",resultado);
}
int main(){
  exponencial();
  return 0;
  
}
