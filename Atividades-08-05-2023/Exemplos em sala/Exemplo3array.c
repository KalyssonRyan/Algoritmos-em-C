#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m" 
#define RESET   "\x1b[0m"
int main(void) {
  int tam,i,sequencia;
  int vetor[tam];
  
  printf("Digite a quantidadede números da sequencia: ");
  scanf("%d",&tam);
  //i = 0 0<6
  for(i=0;i<tam;i++){
    //sequencia=vetor[i]+vetor[i+1];
   // printf("\na sequencia é: %d ",sequencia);
    if (i==0 ||i==1){
      vetor[i]=1; 
    }
    else{
      vetor[i]=vetor[i-1]+vetor[i-2];
    }
  }
  for(i=0;i<tam;i++){
    printf("%d\t",vetor[i]);
  }
  return 0;
}

// crie um codigo em c com array para imprimir a sequencia de fibonacci utilizando for