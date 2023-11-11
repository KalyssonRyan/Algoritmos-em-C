/*
8- faça um algoritmo que leia dois vetores de 12 elementos .crie um vetor que seja a intersecção entre os dois vetores anteriores,ou seja,que contém apenas os números que estão em ambos vetores.não deve conter números repetidos

*/
#include <stdio.h>
#include <locale.h>
int main(){
  setlocale(LC_ALL, "portuguese");
  int vetor1[12],vetor2[12],vetor3[12];
  printf("Para a 1° lista\n\n");
  for(int i=0;i<12;i++){
    printf("Digite o %d° número : ",i+1);
    scanf("%d",&vetor1[i]);
  }
  printf("\n\nPara a 2° lista: \n");
  for(int i=0;i<12;i++){
    printf("Digite o %d° número : ",i+1);
    scanf("%d",&vetor2[i]);
  }
    printf("\nO número repetido nas duas listas são: ");
  for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
        //printf("\nVetor 1: %d",vetor1[i]);
        //printf("\nVetor 2:%d ",vetor2[j]);
      if(vetor1[i]==vetor2[j]){
        vetor3[i]=vetor1[i];
        printf("\n %d",vetor3[i]); 
        if(vetor3[i]!=vetor1[i]){
         vetor3[i]=-1;
       }
  
      }
      }
      
     

    }  
  return 0;
  }  

   

