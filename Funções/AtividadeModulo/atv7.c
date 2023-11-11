/*
Crie uma função que recebe um número como parâmetro e retorne o fatorial do número digitado. 
*/
#include <stdio.h>
#include <locale.h>
int fatorial(int n){
  int fatorial=1;
  for(int i=1;n>1;n=n-1){
    fatorial*=n;
    
  }
  return fatorial;
}
int main(){
  setlocale(LC_ALL, "portuguese");
  int fat;
  printf("\nDigite o número que deseja saber o fatorial: ");
  scanf("%d",&fat);
  printf("\nO fatorial é: %d\n",fatorial(fat));
  return 0;
}