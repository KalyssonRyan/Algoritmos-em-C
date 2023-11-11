/*
4 – Codifique, compile e execute um programa em C que realize o cadastro de computadores de uma
empresa com as seguintes informações: marca, ano de fabricação e peso. Faça o cadastramento de 3
computadores. Em seguida, imprima as informações de cada computador na tela.*/
#include <stdio.h>
#include <locale.h>
struct Pc{
  char marca[100];
  char ano[100];
  float peso;
};
int main(){
  setlocale(LC_ALL, "portuguese");
  struct Pc pc1;
  struct Pc pc2;
  struct Pc pc3;
  //pc1
  printf("Computador 1\nDigite a marca do seu computador: ");
  scanf("%s",pc1.marca);
  printf("Digite o ano de fabricação do seu computador: ");
  scanf("%s",pc1.ano);
  printf("Digite o peso do seu computador: ");
  scanf("%f",&pc1.peso);
  //pc2
  printf("\nComputador 2\nDigite a marca do seu computador: ");
  scanf("%s",pc2.marca);
  printf("Digite o ano de fabricação do seu computador: ");
  scanf("%s",pc2.ano);
  printf("Digite o peso do seu computador: ");
  scanf("%f",&pc2.peso);
  //pc3
  printf("\nComputador 3\nDigite a marca do seu computador: ");
  scanf("%s",pc3.marca);
  printf("Digite o ano de fabricação do seu computador: ");
  scanf("%s",pc3.ano);
  printf("Digite o peso do seu computador: ");
  scanf("%f",&pc3.peso);
  //imprimir
  printf("\nComputador 1\n\nMarca: %s\nFab.: %s\nPeso: %0.2f\n",pc1.marca,pc1.ano,pc1.peso);
  printf("\nComputador 2\n\nMarca: %s\nFab.: %s\nPeso: %0.2f\n",pc2.marca,pc2.ano,pc2.peso);
  printf("\nComputador 3\n\nMarca: %s\nFab.: %s\nPeso: %0.2f\n",pc3.marca,pc3.ano,pc3.peso);
  
  return 0;
}
