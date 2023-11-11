/*
5-Elabore um algoritmo que preencha um vetor com 10 números reais,calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor
*/
#include <stdio.h>
#include <locale.h>
int main(){
  setlocale(LC_ALL, "portuguese");
  float vetor[10],negativos=0,soma=0;
  for(int i=0; i<10;i++){
    printf("Digite o %d° número: ",i+1);
    scanf("%f",&vetor[i]);
    if(vetor[i]<0){
      negativos+=1;
    }
    if(vetor[i]>0){
      soma+=vetor[i];
    }
  }
  if(soma==0){
     printf("\nExistem %0.0f números negativos",negativos);
  }
  else{
    printf("\nExistem %0.0f números negativos, e a soma dos positivos são: %0.2f",negativos,soma);
    
  }
  
  return 0;
}
