/*8 ‐ Desenvolva um programa em C que receba uma String transforme
todas as letras em maiúsculas, copie em outro vetor de caractere de mesmo
tamanho e ao final imprima as duas Strings.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
  char palavra[50],maiuscula[50];
  printf("Digite uma palavra: ");
  scanf("%[^\n]",palavra);
  for(int i=0;i<strlen(palavra);i++){
    maiuscula[i]=toupper(palavra[i]);
  }
  printf("\n%s",palavra);
  printf("\n%s",maiuscula);
  return 0;
}