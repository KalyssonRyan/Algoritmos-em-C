#include <stdio.h>

int exponencial(int n,int e){
  int resultado=1;
  for(int i=0; i < e; i++){
    resultado = resultado * n;
  }
  printf("O resultado eh : %d",resultado);
}
int main(){
  int num,exp,resultado;
  printf("Digite um número: ");
  scanf("%d",&num);
  printf("digite o exponente: ");
  scanf("%d",&exp);
  exponencial(num,exp);
  return 0;
  
}
