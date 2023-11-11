

#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");
  int num;
  printf("Digite um número inteiro: \t");
  scanf("%d",&num);
  if (num%2==0){
    printf("Teu número é par\n");
  }
  else if(num%2!=0){
    printf("Teu número é impar\n");
  }
  return main();
}