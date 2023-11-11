/*6 ‐ Faça um programa em C que receba uma String e verifique se ela é um
Palíndromo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
  char palindromo[50],reverso[50];
  int tam;
  printf("\nVerificador de Palíndromo");
  printf("\n Digite uma palavra: ");
  scanf("%[^\n]s",palindromo);
  tam=strlen(palindromo);
   for (int i = 0; palindromo[i] != '\0'; i++) {
    palindromo[i] = tolower(palindromo[i]);
  
  for (int i = tam - 1; i >= 0; i--) {
    reverso[tam - 1 - i] = palindromo[i];
  }
  reverso[tam] = '\0';
  }
  if(strcmp(palindromo, reverso)== 0){
    printf("\né um palindromo :>");
  }
  else{
    printf("\nInfelizmente não é um palindromo :<");
  }
  return 0;
}