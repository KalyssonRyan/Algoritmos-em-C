#include <stdio.h>
int exponencial(int n,int e){
  int resultado=1;
  for(int i=0; i < e; i++){
    resultado = resultado * n;
  }
  
  
  return resultado;
}

int main(void) {
  int num,exp;
  printf("Digite o número que você quer exponensiar: ");
  scanf("%d",&num);
  printf("Digite o expoente: ");
  scanf("%d",&exp);
  exponencial(num,exp);
  // int resultado=exponencial(num,exp);
  printf("O resultado é : %d",exponencial(num, exp));
  return 0;
}