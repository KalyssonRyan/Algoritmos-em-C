//descriptografar//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
  char string[100];
  int stringn[100];
  printf("Digite a frase a ser descriptografada: ");
  // cavalo é fdydor
  scanf("%[^\n]",string);
  for (int i = 0; string[i] != '\0'; i++) {
    stringn[i]=string[i]-3;
  }
  for(int i=0;strlen(string)>i;i++){
    if (string[i] == ' ') {
      printf(" ");
    }
    else{
      if(islower(string[i])){
          if(stringn[i] < 97){
            printf("%c",stringn[i]+26);
          }
          else{
            printf("%c",stringn[i]);
          }
        }
        if(isupper(string[i])){
          if(stringn[i] <65){
            printf("%c",stringn[i]+26);
          }
          else{
            printf("%c",stringn[i]);
          }

    }
    }
  }
  return 0;
}