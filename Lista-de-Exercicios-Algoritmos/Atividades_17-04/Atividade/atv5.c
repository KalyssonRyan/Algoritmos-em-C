/*Faça um programa em C que leia um número indeterminado
de linhas contendo, cada uma, a idade de um indivíduo
(pare quando for informada a idade 0), e calcule a idade
média desse grupo de indivíduos.*/
#include <stdio.h>
#include <locale.h>
#define GRN "\e[0;32m"
#define RESET "\e[0;37m"
#define RED "\e[0;31m"
#define YEL "\e[0;33m"
int main(){
  setlocale(LC_ALL, "portuguese");
  int idade,soma=0,quantidade=0;
  do{
    printf(GRN"\nVá Digitando algumas Idades para calcular a média,quando quiser parar digite 0 :"RESET);
    scanf("%d",&idade);
    if(idade>0){
      soma=soma+idade;
      quantidade++;
      printf("A SOMA É: %d",soma);
      printf("\nA IDADE É: %d",idade);
      printf("\nA quantidade é %d",quantidade);
    }
    if(idade==0){
      printf("A Média de todas as idades é: %d",soma/quantidade);
    }
    if(idade<0){
      printf(RED"Por favor...pare de graça,Existe idade Negativa Por Acaso\?\?");
    }
  }while(1);
  return 0;
}