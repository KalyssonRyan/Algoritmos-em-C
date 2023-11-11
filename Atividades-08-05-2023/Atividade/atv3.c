/*
3-Faça um programa que leia um vetor de 8 posições e em seguida leia também 2 valores x e y quaisquer correspondentes a duas posições do vetor.ao final o programa deve escrever a soma dos valores encontrados nas respectivas posições X e Y
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define RED "\x1b[31m"
#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
int main(){
  setlocale(LC_ALL, "portuguese");
  int vetor[8],op,valor1,valor2,resultado=0;
  for(int i=0;i<8;i++){
    printf("Digite o %d° valor: ",i+1);
    scanf("%d",&vetor[i]);
  }
  do{
    printf("\nDigite qual valor você deseja acessar: ");
    scanf("%d",&op);
    switch(op){
      case 1:
      printf("O valor acessado foi %d",vetor[0]);
      valor1=vetor[0];
      break;
      case 2:
      printf("O valor acessado foi %d",vetor[1]);
        valor1=vetor[1];
      break;
      case 3:
      printf("O valor acessado foi %d",vetor[2]);
        valor1=vetor[2];
      break;
      case 4:
      printf("O valor acessado foi %d",vetor[3]);
        valor1=vetor[3];
      break;
      case 5:
      printf("O valor acessado foi %d",vetor[4]);
        valor1=vetor[4];
      break;
      case 6:
      printf("O valor acessado foi %d",vetor[5]);
        valor1=vetor[5];
      break;
      case 7:
      printf("O valor acessado foi %d",vetor[6]);
        valor1=vetor[6];
      break;
      case 8:
      printf("O valor acessado foi %d",vetor[7]);
        valor1=vetor[7];
      break;
      default:
        printf(RED"\nDigite números válidos!"RESET);
      break;
    }
    
  }while(op>8 || op<1);
    
  do{
    printf("\nDigite o 2° Valor que você deseja acessar para somar: ");
    scanf("%d",&op);
  switch(op){
     case 1:
    printf("\nO valor acessado foi %d",vetor[0]);
    printf("\nO resultado é: %d",resultado);
    resultado=valor1+vetor[0];
    printf(GREEN"\nA soma dos valores são: %d",resultado);
    break;
    case 2:
    printf("\nO valor acessado foi %d",vetor[1]);
    resultado=valor1+vetor[1];
    printf(GREEN"\nA soma dos valores são: %d",resultado);
    break;
    case 3:
    printf("\nO valor acessado foi %d",vetor[2]);
    resultado=valor1+vetor[2];
    printf(GREEN"\nA soma dos valores são: %d",resultado);
    break;
    case 4:
    printf("\nO valor acessado foi %d",vetor[3]);
    resultado=valor1+vetor[3];
    printf(GREEN"\nA soma dos valores são: %d",resultado);
    break;
    case 5:
    printf("\nO valor acessado foi %d",vetor[4]);
    resultado=valor1+vetor[4];
    printf(GREEN"\nA soma dos valores são: %d",resultado);
    break;
    case 6:
    printf(GREEN"\nO valor acessado foi %d",vetor[5]);
    resultado=valor1+vetor[5];
    printf(GREEN"\nA soma dos valores são: %d",resultado);
    break;
    case 7:
    printf(GREEN"\nO valor acessado foi %d",vetor[6]);
    resultado=valor1+vetor[6];
    printf(GREEN"\nA soma dos valores são: %d",resultado);
    break;
    case 8:
    printf("\nO valor acessado foi %d",vetor[7]);
    resultado=valor1+vetor[7];
    printf(GREEN"\nA soma dos valores é: %d",resultado);
    break;
    default:
      printf(RED"\nDigite apenas números válidos!"RESET);
    break;
  }
    
  }while(op>8 || op<1);
  
  return 0;
}