/*Faça um algoritmo que determine e mostre os cinco
primeiros múltiplos de 3, considerando números maiores
do que 0*/

#include <stdio.h>
#include <locale.h>
#define BLU "\e[0;32m"
#define RESET "\e[0;37m"
#define RED "\e[0;31m"
int main(){
 //3,6,9,12,15//
  setlocale(LC_ALL,"portuguese");
  int multi,num=3;
  printf(BLU"Os"RED" 5 "BLU"primeiros números múltiplos de"RED" 3"BLU" são: \n");
  while(num<=15){
    printf(BLU"\nO número"RED " %d ",num);
    num=num+3;
  }
  return 0;
}