#include <stdio.h>
#include <locale.h>
int main() {
  

  setlocale(LC_ALL,"portuguese");
  int num1,num2,num3;
  printf("\n\ndigite o 1° número: \t");
  scanf("%d",&num1);
  printf("digite o 2° número: \t");
  scanf("%d",&num2);
  printf("digite o 3° número: \t");
  scanf("%d",&num3);
   //    *3 1 2
  if (num1 <= num2 && num1 <= num3 && num2>num1 && num2<num3){
    printf("em ordem crescente os números são: %d,%d,%d",num1,num2,num3);
    //123
  }
  else if(num1>num2 && num2>num3){
    printf("em ordem crescente os números são: %d,%d,%d",num3,num2,num1);
    //123  10 9 8
  }
  else if(num2>num3 && num2>num1 && num3>num1){
    printf("em ordem crescente os números são: %d,%d,%d",num1,num3,num2);
    // 123  5 10 6
  }
  else if(num3>num1 && num3>num2 && num1>num2){
    printf("em ordem crescente os números são: %d,%d,%d",num2,num1,num3);
    //* 2 1 3  5 3 7
  }
  else if(num2>num1 && num2>num3 && num1>num3){
    printf("em ordem crescente os números são: %d,%d,%d",num3,num1,num2);
    // *2 3 1     4 10 3
  }
  else if(num1>num3 && num1>num2 && num3<num1){
    printf("em ordem crescente os números são: %d,%d,%d",num2,num3,num1);
    //*3 1 2    10 5 6
  }
  
  
  
  return main();
} 
