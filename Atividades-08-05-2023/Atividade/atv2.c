/*
2-escrever um programa que declare um vetor de 20 inteiros,leia um valor para cada posição e no final mostre quantos elementos possuem valor maior,menos,e igual ao primeiro elemento do vetor
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define RED   "\x1b[31m"
#define RESET "\x1b[0m"
  
int main(void) {
  int vetor[20],maior=0,igual=0,menor=-1;
  for(int i=0;i<20;i++){
    printf("Digite um valor: ");
    scanf("%d",&vetor[i]);
  }
    for(int i=0;i<20;i++){
      if(vetor[i+1]>vetor[0] && vetor[i+1]!=vetor[0]){
      maior++;
     }
       if(vetor[i+1]==vetor[0]){
      igual++;
    }
      if(vetor[i+1]<vetor[0]){
      menor++;
    }
  }
  printf(RED"\nExistem "RESET"%d "RED"números maiores que o primeiro número: "RESET"%d",maior,vetor[0]);
  printf(RED"\nExistem "RESET"%d"RED" números Menores que o primeiro número:"RESET"%d",menor,vetor[0]);
  printf(RED"\nExistem "RESET"%d"RED" números Iguais ao o primeiro número: "RESET"%d",igual,vetor[0]);
 
  return 0;
}

