/*
1 – Codifique, compile e execute um programa em C que crie uma estrutura Hora com os seguintes campos:
hora, minuto e segundo. Em seguida defina uma variável do tipo da estrutura Hora e leia os valores para
cada campo da estrutura na tela.
*/
#include <stdio.h>
#include <locale.h>

struct hora{
  int hora;
  int minuto;
  int segundos;
};
int main(){
  setlocale(LC_ALL, "portuguese");
  struct hora horas;
  printf("\nDigite uma hora: ");
  scanf("%d",&horas.hora);
  printf("\nDigite um minuto: ");
  scanf("%d",&horas.minuto);
  printf("\nDigite um segundo: ");
  scanf("%d",&horas.segundos);

  printf("as horas digitados foram:");
  printf("\n%dh:%dm:%ds",horas.hora,horas.minuto,horas.segundos);
  return 0;
}
