#include <stdio.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL, "portuguese");
  int n,i,soma;
  soma=0;
  printf("Digite um número : \t");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    soma=soma+i;
  }
  printf("Soma dos valores : %d",soma);
  return 0;
}
