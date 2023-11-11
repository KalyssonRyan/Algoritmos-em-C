/*Faça um algoritmo que apresente os quadrados dos
números inteiros de 15 a 200. */
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define BLU "\e[0;32m"
#define RESET "\e[0;37m"
#define RED "\e[0;31m"
int main(){
    setlocale(LC_ALL, "portuguese");
    int num=14;
    printf(BLU"Vamos Calcular o quadrado do número"RED"15"RESET" ao "RED"200\n");
    for(int i=185;i>=0;i--){
      num=num+1;
      printf(BLU"\nO número "RED"%d"BLU" ao quadrado é: "RESET"%0.0f",num,pow(num,2));
    }
  
  
  return 0;
}