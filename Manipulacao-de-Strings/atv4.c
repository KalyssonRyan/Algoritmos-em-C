/*
4 - Reescreva novamente o programa da questão 2 para
que seja exibido a quantidade de vogais e a quantidade de
consoantes da palavra “batatinha”.
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
  int vogal=0,consoantes=0;
  Palavra(palavra);
  for(int i=0;i<10;i++){
    if(palavra[i] == 'a'){
      vogal++;
    }
    if(palavra[i] == 'e'){
      vogal++;
    }
    if(palavra[i] == 'i'){
      vogal++;
    }
    if(palavra[i] == 'o'){
      vogal++;
    }
    if(palavra[i] == 'u'){
      vogal++;
    }
  }
  for(int i=0;i<9;i++){
    if(palavra[i] != 'a'&& palavra[i] != 'e'&& palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u'){
      consoantes++; 
    }
    
    }
  printf("\nA quantidade de Vogais são: %d",vogal);
  printf("\nA quantidade de Consoantes são: %d",consoantes);

  return 0;
}