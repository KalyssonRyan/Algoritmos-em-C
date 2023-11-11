#include <stdio.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"portuguese");
  int num;
  printf("digite um mês do ano: \t");
  scanf("%d",&num);
  switch(num){
    case 1:
      printf("\n é Janeiro\n\n");
      break;
    case 2:
      printf("\n é Fevereiro\n\n");
      break;
    case 3:
      printf("\n é Março\n\n");
      break;
    case 4:
      printf("\n é Abril\n\n");
      break;
    case 5:
      printf("\n é Maio\n\n");
      break;
    case 6:
      printf("\n É Junho\n\n");
      break;
    case 7:
      printf("\n É Julho\n\n");
      break;
    case 8:
      printf("\n É Agosto\n\n");
      break;
    case 9:
      printf("\n É Setembro\n\n");
      break;
    case 10:
      printf("\n É Outrubro\n\n");
      break;
    case 11:
      printf("\n É Novembro\n\n");
      break;
    case 12:
      printf("\n É Dezembro\n\n");
      break;

    default:
      printf("\n Esse Mês não existe,tá locão\?\n\n");
  
  }
  return main();
}
