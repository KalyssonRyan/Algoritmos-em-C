/*9 ‐ Escreva um programa que funciona como o jogo da forca. O
usuário tenta acertar uma palavra (contida numa variável) usando 5
tentativas. A palavra é mostrada ao usuário com as letras marcadas
com o símbolo '*'. O usuário deve digitar uma letra (sem acentos, til,
trema) e caso a letra esteja correta, o símbolo '*' é substituído pela
letra. Se o usuário não montar a palavra até a quinta tentativa, o jogo
acaba em derrota.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
void Segredo(int tam) {

  for(int i=0;i<tam;i++){
    printf("*");
    
  }
}
int main(){
  setlocale(LC_ALL, "portuguese");
  char palavra[50]="zebra",tentativa[50],acerto[50]={ '\0' };
  int tamanho,acertou=0,chances=5;
  tamanho=strlen(palavra);
  printf("\nSeja bem vindo(a) ao jogo da forca!\n");
  printf("---------------------------\n");
  printf("\nA sua palavra é: ");
  Segredo(tamanho);
    printf("\nVocê tem %d tentativa",chances);
     do {
    printf("\nDigite uma letra: ");
    scanf(" %c", &tentativa[0]);
    
    acertou = 0;
    
    for (int i = 0; i < tamanho; i++) {
      if (tentativa[0] == palavra[i]) {
        acerto[i] = palavra[i];
        chances--;
        acertou = 1;
      }
    }
    
    if (acertou) {
      
      printf("%s", acerto);
      Segredo(tamanho - strlen(acerto));
    } else {
      printf("A letra digitada não está correta.\n");
      printf("%s", acerto);
      Segredo(tamanho - strlen(acerto));
      chances--;
      printf("\nVoce tem %d chance",chances);
    }
    if (strcmp(acerto, palavra) == 0) {
      printf("\n\nParabéns, você acertou a palavra!\n");
      return 0;
    }
  } while (chances > 0);
  
  printf("\nSuas tentativas acabaram. Você perdeu!\n");
  
  return 0;
}