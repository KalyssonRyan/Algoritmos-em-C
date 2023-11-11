// 1-Leia um vetor de 10 valores insteiros e exibatodos os valores ímpares

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define RED     "\x1b[31m"
#define RESET   "\x1b[0m"
int main(void) {
  int valor[10];
  printf(RED"Digite alguns valores "RESET);
  for(int i=0;i<10;i++){
    printf("\ndigite o %d° valor: ",i+1);
    scanf("%d",&valor[i]);
    //printf("%d\t",valor[i]);
    
  }
  printf(RED"\nOs valores ímpares são:\n"RESET);
  for(int i=0;i<10;i++){
    if(valor[i]%2==1){
      printf("%d\t",valor[i]);
      
    }
  }
  return 0;
}

