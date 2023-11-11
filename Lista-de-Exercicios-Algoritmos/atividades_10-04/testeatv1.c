#include <stdio.h>
#include <locale.h>
#define GRN "\e[0;32m"
#define RESET "\e[0;37m"
#define RED "\e[0;31m"
#define YEL "\e[0;33m"
int main() {
  setlocale(LC_ALL,"portuguese");
  int num=0;
  do{
    printf(GRN"digite um dia da semana: \n"RESET);
  scanf("%d",&num);
  }while(num<0);
  
  switch(num){
    case 1:
      printf(RED"\n é Domingo\n\n"RESET);
      break;
    case 2:
      printf(RED"\n é Segunda\n\n"RESET);
      break;
    case 3:
      printf(RED"\n é Terça\n\n"RESET);
      break;
    case 4:
      printf(RED"\n é Quarta\n\n"RESET);
      break;
    case 5:
      printf(RED"\n é Quinta\n\n"RESET);
      break;
    case 6:
      printf(RED"\n É Sexta\n\n"RESET);
      break;
    case 7:
      printf(RED"\n É Sábado\n\n"RESET);
      break;
    default:
      printf(RED"\n Número Invalido\n\n"RESET);
  
  }
  return main();
}
