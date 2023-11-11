/*Faça um algoritmo que precisa receber uma data válida,considere dia entre 1 e 31 caso o usuário digite um valor fora desse intervalo ,o algoritmo deve pedir paradigitar novamente até acertar*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define RESET   "\x1b[0m"
int main(void) {
  int num=1;
  while(num>0 || num<=31){
  if(num<=31 && num !=0){
    system("clear");
    printf("\nDigite um número: ");
    scanf("%d",&num);
     printf("A data digitada foi : %d",num);
  }
  if(num>31 || num<=0){
    do{
    printf(RED"\nDigite um número válido"RESET);
    printf("\nDigite uma data: ");
    scanf("%d",&num);
    printf("A data digitada foi : %d",num);
  }while(num>31 || num<=0);
  }
    
}   
 
  
  
  return 0;
}