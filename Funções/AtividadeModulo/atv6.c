/*
6 – Acrescente no exercício anterior as funções de subtração, multiplicação e divisão dos números
*/
#include <stdio.h>
#include <locale.h>
int divisao(int n1,int n2){
  int resultado=0;
  resultado+=n1/n2;

  return resultado;
}
int multiplicacao(int n1,int n2){
  int resultado=0;
  resultado+=n1*n2;

  return resultado;
}
int subtracao(int n1,int n2){
  int resultado=0;
  resultado+=n1-n2;

  return resultado;
}
int soma(int n1,int n2){
  int resultado=0;
  resultado+=n1+n2;

  return resultado;
}
int main(){
  setlocale(LC_ALL, "portuguese");
  int num1,num2,op,repeat;
  printf("Digite o 1° número: ");
  scanf("%d",&num1);
  printf("Digite o 2° número: ");
  scanf("%d",&num2);
  do{
    printf("Digite qual opcao deseja acessar:\n 1-Soma \n 2-Subtração \n 3-Multiplicação \n 4-Divisão \n :");
    scanf("%d",&op);
    switch(op){
      case 1:
      printf("O resultado é : %d\n",soma(num1,num2)); 
      repeat=1;
      break;
      case 2:
      printf("O resultado é : %d\n",subtracao(num1,num2));
      repeat=1;
      break;
      case 3:
      printf("O resultado é : %d\n",multiplicacao(num1,num2));
      repeat=1;
      break;
      case 4:
      printf("O resultado é : %d\n",divisao(num1,num2));
      repeat=1;
      break;
      default:
      printf("\nA opção digitada não existe");
      repeat=0;
      break;
    }
    
  }while(repeat==0);
  return 0;
}