#include <stdio.h>
#include <locale.h>
int main(){
  setlocale(LC_ALL, "Portuguese");
  /* Faça um programa em C que calcule a área de um 
triângulo, cuja base e altura são fornecidas pelo 
usuário. Esse programa não pode permitir a entrada de 
dados inválidos ,ou menores ou iguais a 0.*/
  float base=1,altura=1,resultado;
  printf("Bora Calcular a área de um triangulo digite um número maior que 0 \n");
  do{
    printf("Digite a Base: ");
    scanf("%f",&base); 
    if(base>=1){
    
    base=base+2;
    }
    if(base<=0){
      printf("Digite um número válido\n");
      base=1;
    }
  
  }while(base<2);
  do{
  printf("Digite a Altura: ");
  scanf("%f",&altura);
    if(altura>=1){
      altura=altura+2;
    }
    if(altura<=0){
      printf("Digite um número válido!!!\n");
      altura=1;
    }
  }while(altura<2);
  base=base-2;
  altura=altura-2;
  resultado= base*altura/2;
  printf("\n A área do Triangulo é : %0.1f",resultado);

  return 0;
}