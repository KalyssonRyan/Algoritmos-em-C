/*Faça um programa em C que receba um número inteiro
maior do que 1, e verifique se o número fornecido é primo
ou não.*/
#include <stdio.h>
#include <locale.h>
#define GRN "\e[0;32m"
#define RESET "\e[0;37m"
#define RED "\e[0;31m"
#define YEL "\e[0;33m"

int main(){
  setlocale(LC_ALL, "portuguese");
  int num,soma=0,sair;
  printf("Vamos Calcular os Números Primos\n");
do{
  printf(GRN"\nDigite um número maior que 1: " RESET);
  scanf("%d",&num);
  if(num>0 ){
    for(int i=2;i<=num/2;i++){
      if(num%i==0){
        soma++;
        break;
      }
    }
    if (soma==0){
      printf("\nEste número é primo");
        /*printf("Digite 1 para continuar");
        scanf("%d",&num);*/
      soma=0;
        
      }
    else {
        printf("\nEste Número" RED " NÃO " RESET "é primo");
        soma=0;
      }
  
  }
  else {
    printf(RED"Por Favor Digite apenas números Positivos diferente de zero");
    soma=0;
  }
}while(num>=0 || num<0);
  return 0;
}