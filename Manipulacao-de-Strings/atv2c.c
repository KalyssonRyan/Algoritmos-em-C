/*
2 – Codifique, compile e execute um programa na
linguagem C que armazene todas as letras da palavra
“batatinha”. Em seguida, imprima apenas as vogais.
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
  printf("\nAs vogais presentes na palavra são: ");
  for(int i=0;i<10;i++){
    if(palavra[i] == 'a'){
      printf("%c",palavra[i]);
    }
    if(palavra[i] == 'e'){
      printf("%c",palavra[i]);
    }
    if(palavra[i] == 'i'){
      printf("%c",palavra[i]);
    }
    if(palavra[i] == 'o'){
      printf("%c",palavra[i]);
    }
    if(palavra[i] == 'u'){
      printf("%c",palavra[i]);
    }
  }
  
  return 0;
}