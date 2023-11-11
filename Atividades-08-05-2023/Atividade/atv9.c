/*
9-Desenvolva um programa para ler 8 números inteiros DIFERENTESa serem armazenados em um vetor os dados deverão ser armazenados no vetor na ordem que forem sendo lidos,sendo que caso o usuario digite um número que já foi digitado anteriormente,o programa dverá pedir para ele digitar outro número.note que a cada valor digitado pelo usuario deve ser pesquisado no vetor verificado se ele existe .exibinr na tela o vetor final
*/

#include <stdio.h>
#include <locale.h>
int main(){
  setlocale(LC_ALL, "portuguese");
  int vetor[8],repeat=0;
    
    for(int i=0;i<8;i++){
      do{
      printf("Digite o %d° número: ",i+1);
      scanf("%d",&vetor[i]);
     
     if(vetor[i]==vetor[i-1]){
          printf("\nEsse valor já existe,por favor digite outro\n");
          repeat=0;
     }
    else if(vetor[i]==vetor[i-2]){
          printf("\nEsse valor já existe,por favor digite outro\n");    
          repeat=0;
     }
    else if(vetor[i]==vetor[i-3]){
          printf("\nEsse valor já existe,por favor digite outro\n"); 
          repeat=0;
     }
    else if(vetor[i]==vetor[i-4]){
          printf("\nEsse valor já existe,por favor digite outro\n");    
          repeat=0;
     }
    else if(vetor[i]==vetor[i-5]){
          printf("\nEsse valor já existe,por favor digite outro\n");    
          repeat=0;
     }
    else if(vetor[i]==vetor[i-6]){
          printf("\nEsse valor já existe,por favor digite outro\n");    
          repeat=0;
     }
    else if(vetor[i]==vetor[i-7]){
          printf("\nEsse valor já existe,por favor digite outro\n");    
          repeat=0;
     }
    else{
      repeat=1;
    }
        
      }while(repeat==0);
    
    }
  printf("\nOs números digitados foram: ");
    for(int i=0;i<8;i++){
      printf("%d\t",vetor[i]);
    }
    
  
  return 0;
}