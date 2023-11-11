/*
3 - Reescreva o programa da questão 2 para que seja
impresso apenas as consoantes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void Palavra(char palavra[10]){
 int repeat;
  do {
    repeat=1;
    printf("\nDigite 'batatinha' :");
    scanf("%[^\n]s",palavra);
    while (getchar() != '\n');  
    if(strcmp(palavra, "batatinha")==0){
      repeat=0;
    }
    else{
      printf("\npor favor,digite corretamente");
      repeat=1;
    }
    
  }while(repeat==1); 
}

int main(){
  char palavra[10];
  Palavra(palavra);
  printf("\nAs consoantes presentes na palavra são:");
  for(int i=0;i<10;i++){
    if(palavra[i] != 'a'&& palavra[i] != 'e'&& palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u'){
      printf("%c",palavra[i]);
      
    }
    
    }
  printf("\n %d",teste);
  
  return 0;
}