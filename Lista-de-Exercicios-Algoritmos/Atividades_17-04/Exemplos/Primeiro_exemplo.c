#include <stdio.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL, "portuguese");
  int x=0;
  printf("digite um número pra a gente contar  até 20:\t");
  scanf("%d",&x);
  while(x<=20){
    if(x%2==0){
      printf("bora contar %d... \n",x);
    }
    x = x + 1;
  }
  return 0;
}
