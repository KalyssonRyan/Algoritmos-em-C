/*
9-Desenvolva um programa para ler 8 números inteiros DIFERENTESa serem armazenados em um vetor os dados deverão ser armazenados no vetor na ordem que forem sendo lidos,sendo que caso o usuario digite um número que já foi digitado anteriormente,o programa dverá pedir para ele digitar outro número.note que a cada valor digitado pelo usuario deve ser pesquisado no vetor verificado se ele existe .exibinr na tela o vetor final
*/

#include <stdio.h>
#include <locale.h>
#define RED "\x1b[31m"
#define RESET "\x1b[0m"
int main(){
  setlocale(LC_ALL, "portuguese");
  int vetor[8],repeat=0;
    
    for(int i=0;i<8;i++){
     
     do{
        printf("Digite o %d° número: ",i+1);
        scanf("%d",&vetor[i]);  
     for(int j=1;j<8;j++){
       if(vetor[i]==vetor[i-j]){
            printf(RED"\nEsse valor já existe,por favor digite outro\n"RESET);
          vetor[i]=-1;
            repeat=0;
         if(i<8){
           i-=1;
         } 
       }
      else{
      repeat=1;
    }    
     }  
      }while(repeat==0);
    }
      printf("\nOs números digitados foram: ");
    for(int i=0;i<8;i++){
      if(vetor[i]!=-1){
        printf("%d\t",vetor[i]);   
      }
    }
  return 0;
}