#include <stdio.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"portuguese");
  int num1,num2;
  printf("digite o 1° número: \t");
  scanf("%d",&num1);
  printf("digite o 2° número: \t");
  scanf("%d",&num2);
  if(num1>num2){
    printf("O número %d é maior",num1);   
  }
  
  else{
    printf("O número %d é maior",num2);
  }

  return 0;
}
