/*
4 – Codifique, compile e execute um programa que contenha uma função que receba como
parâmetro um valor inteiro e gere como saída n linhas com pontos de exclamação, conforme o
exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!!
*/
#include <stdio.h>
#include <locale.h>

int exc(int n){
  for(int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
      printf("!");
    }
    printf("\n");
  }
}
int main (){
  int num;
  setlocale(LC_ALL, "portuguese");
  printf("Digite a quantidade que deseja: ");
  scanf("%d",&num);
  exc(num);
  return 0;
}
