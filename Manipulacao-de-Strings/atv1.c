/*1 - Faça um programa em C que lê três palavras do teclado e imprime as três palavras na ordem inversa.*/

// Feito usando o gets//

/*#include <stdio.h>
#include <string.h>
int main(void) {
  char palavra1[50],palavra2[50],palavra3[50];
  int tam;
    printf("Digite a 1° Palavra: ");  
    gets(palavra1);
    printf("Digite o 2° Palavra: ");  
    gets(palavra2);
    printf("Digite o 3° Palavra: ");  
    gets(palavra3);
    tam= strlen(palavra1);
    printf("%d\n",tam);
    printf("\nA primeira palavra ao contrário:\n");
    for(int i=tam;-1<i;i--){
      printf("%c",palavra1[i]);
    }
    tam=strlen(palavra2);
    printf("\nA Segunda palavra ao contrário:\n");
    for(int i=tam;-1<i;i--){
      printf("%c",palavra2[i]);
    }
    tam=strlen(palavra3);
    printf("\nA Terceira palavra ao contrário:\n");
    for(int i=tam;-1<i;i--){
      printf("%c",palavra3[i]);
    }
  
  
  return 0;
}*/

//Feito usando o scanf//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
  char palavra1[50],palavra2[50],palavra3[50];
  int tam;
    printf("Digite a 1° Palavra: ");  
    scanf("%[^\n]s",palavra1);
    while (getchar() != '\n');
    printf("Digite o 2° Palavra: ");  
    scanf("%[^\n]s",palavra2);
    while (getchar() != '\n');  
    printf("Digite o 3° Palavra: ");  
    scanf("%[^\n]s",palavra3);
    while (getchar() != '\n');
    tam= strlen(palavra1);
    printf("\nA primeira palavra ao contrário:\n");
    for(int i=tam-1;i>=0;i--){
      printf("%c",palavra1[i]);
    }
    tam=strlen(palavra2);
    printf("\nA Segunda palavra ao contrário:\n");
    for(int i=tam-1;i>=0;i--){
      printf("%c",palavra2[i]);
    }
    tam=strlen(palavra3);
    printf("\nA Terceira palavra ao contrário:\n");
    for(int i=tam-1;i>=0;i--){
      printf("%c",palavra3[i]);
    }
  
  
  return 0;
}