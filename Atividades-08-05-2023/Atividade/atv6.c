/*
6-crie um programa que leia dois vetores inteiros de 20 posições.ao final crie um terceiro vetor de 20 posições que terá nas posições pares os valores pares contidos nas mesmas posições do primeiro vetor e nas ímpares os valores na mesma posição do segundo vetor.considerar 0 como par

*/
#include <stdio.h>
#include <locale.h>
int main(){
  setlocale(LC_ALL, "portuguese");
  int vetor1[20],vetor2[20],vetor3[20],resto;
  printf("\nPara a primeira lista\n");
  for(int i=0;i<20;i++){
    printf("\nDigite o %d° número: ",i+1);
    scanf("%d",&vetor1[i]);
    resto= i%2;
    if(resto==0){
      vetor3[i]=vetor1[i];
    }
  }
  printf("\nPara a segunda lista \n");
  for(int i=0;i<20;i++){
     printf("\nDigite o %d° número: ",i+1);
    scanf("%d",&vetor2[i]);
    resto=i%2;
    if(resto==1){
      vetor3[i]=vetor2[i];
    }
  }
  printf("\nA terceira lista que contém os 2 são: \n");
  for(int i=0;i<20;i++){
    printf("\n%d",vetor3[i]);
  }
  
  return 0;
}