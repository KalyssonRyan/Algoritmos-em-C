/*
5 ‐ Elabore um programa em C que leia duas Strings. Se as Strings forem
iguais escreva “Strings iguais”. Caso contrário, concatene (junte) as duas
Strings e imprima a String resultante.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
  char string1[50],string2[50];
  printf("Digite a primeira palavra: ");
  scanf("%[^\n]",string1);
  
  while (getchar() != '\n');  
  printf("Digite a segunda palavra: ");
  for (int i = 0; string1[i] != '\0'; i++) {
    string1[i] = tolower(string1[i]);
  }
  scanf("%[^\n]",string2);
  while (getchar() != '\n');
  for (int i = 0; string2[i] != '\0'; i++) {
    string2[i] = tolower(string2[i]);
  }
  if(strcmp(string1, string2)==0){
    printf("\n Strings iguais");
  }
  else{
    strcat(string1, string2);
    printf("\n%s\n", string1);
  }
  return 0;
}