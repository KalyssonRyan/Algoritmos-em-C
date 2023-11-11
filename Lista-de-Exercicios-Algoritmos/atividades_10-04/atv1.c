#include <stdio.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"portuguese");
  int num;
  printf("digite um dia da semana: \n");
  scanf("%d",&num);
  switch(num){
    case 1:
      printf("\n é Domingo\n\n");
      break;
    case 2:
      printf("\n é Segunda\n\n");
      break;
    case 3:
      printf("\n é Terça\n\n");
      break;
    case 4:
      printf("\n é Quarta\n\n");
      break;
    case 5:
      printf("\n é Quinta\n\n");
      break;
    case 6:
      printf("\n É Sexta\n\n");
      break;
    case 7:
      printf("\n É Sábado\n\n");
      break;
    default:
      printf("\n Número Invalido\n\n");
  
  }
  return main();
}
