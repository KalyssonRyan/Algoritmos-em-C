/*7 ‐ Codifique um programa que recebe uma String e substitui cada letra
pela terceira letra seguinte circularmente (A é substituído por D, … e Z é
substituído por C).*/
// criptografar//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
  char string[100],string1[100];
  int stringn[100],stringn1[100]; 
  printf("Digite a frase a ser criptografada: ");
  scanf("%[^\n]",string);
  while (getchar() != '\n');
  for (int i = 0; string[i] != '\0'; i++) {
    stringn[i]=string[i]+3;
    
    
  }
  for(int i=0;strlen(string)>i;i++){
    if (string[i] == ' ') {
      printf(" ");
    }
    else{ 
    if(islower(string[i])){
      if(stringn[i] >122){
        printf("%c",stringn[i]-26);
      }
      else{
        printf("%c",stringn[i]);
      }
    }
    if(isupper(string[i])){
      if(stringn[i] >90){
        printf("%c",stringn[i]-26);
      }
      else{
        printf("%c",stringn[i]);
      }
    }
    }
  }
  
    printf("\nDigite a frase a ser descriptografada: ");
  // cavalo é fdydor
  scanf("%[^\n]",string1);
  for (int i = 0; string1[i] != '\0'; i++) {
    stringn1[i]=string1[i]-3;
  }
  for(int i=0;strlen(string1)>i;i++){
    if (string1[i] == ' ') {
      printf(" ");
    }
    else{
      if(islower(string1[i])){
          if(stringn1[i] < 97){
            printf("%c",stringn1[i]+26);
          }
          else{
            printf("%c",stringn1[i]);
          }
        }
        if(isupper(string1[i])){
          if(stringn1[i] <65){
            printf("%c",stringn1[i]+26);
          }
          else{
            printf("%c",stringn1[i]);
          }

    }
    }
  }

  return 0;
}

