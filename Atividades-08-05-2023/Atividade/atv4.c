/*
leia um vetor de 50 posições e atribua valor,0 para todos elementos que possuírem valores negativos
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
  setlocale(LC_ALL, "portuguese");
  int vetor[50];
  for(int i=0;i<50;i++){
    printf("\nDigite o %d° valor: ",i+1);
    scanf("%d",&vetor[i]);
    if(vetor[i]<0){
      vetor[i]=0;
    }
  
  }
  for(int i=0;i<50;i++){
    printf("\nO %d° valor é: %d",i+1,vetor[i]);
  }
  return 0;
}