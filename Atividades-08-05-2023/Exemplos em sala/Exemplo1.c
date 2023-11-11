#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m" 
#define RESET   "\x1b[0m"
int main() {
  int op,saldo=0,saque,deposito;
  setlocale(LC_ALL, "portuguese");
  do{
    system("clear");
    printf(GREEN"\nBem vindo ao Banco"RESET"  \n1-Saldo\n2-Saque\n3-Deposito\n4-Sair\nEscolha : ");
    scanf("%d",&op);
    switch(op){
      case 1:
        printf(RED"O seu saldo atual é:"RESET" %d",saldo);
      break;
      case 2:
        if(saldo==0 || saldo<0){
          printf(RED"\nVocê não tem saldo o suficiente"RESET);
        }
        else if(saldo>0){
          printf(RED"Quanto você deseja sacar? : "RESET);
          scanf("%d",&saque);
          if(saque>saldo){
            printf(RED"Você não pode sacar mais que o seu saldo: %d"RESET,saldo);
            
          }
          else{
          saldo=saldo - saque;
            
          }
        
  
        }
         break;
      case 3:
      printf(RED"Quanto você deseja depositar? :"RESET);
      scanf("%d",&deposito);
      saldo=saldo+deposito;
      break;
      case 4:
      break;
      default:
      printf(RED"Por favor digite um número válido!!!"RESET);
      break;
    }
  }while(op!=4);
  printf(GREEN"Volte sempre :>"RESET);
  return 0;
}