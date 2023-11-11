/*
2 – Codifique, compile e execute um programa em C que crie uma estrutura Endereço com os seguintes
campos: nome da rua, número, cidade, estado e cep. Em seguida defina uma variável do tipo da estrutura
Endereço e leia os valores para cada um dos seus campos. Ao final, imprima os valores armazenados em
cada campo da estrutura na tela.
*/

#include <stdio.h>
#include <locale.h>
struct adress{
  char rua[50];
  int num;
  char cidade[50];
  char estado[50];
  int cep;
  
};
int main(){
  setlocale(LC_ALL, "portuguese");
  struct adress endereco;
  printf("\nDigite o nome da sua rua\(Sem espaços por favor\): ");
  scanf("%s",endereco.rua);
  printf("\nDigite o número da casa: ");
  scanf("%d",&endereco.num);
  printf("\nDigite a sua cidade\(Sem espaços por favor\): ");
  scanf("%s",endereco.cidade);
  printf("\nDigite o seu estado\(Sem espaços por favor\): ");
  scanf("%s",endereco.estado);
  printf("\nDigite o seu CEP: ");
  scanf("%d",&endereco.cep);
  printf("\n Confirme os seus dados:\n");
  printf("\nRua: %s\nNúmero: %d\nCidade: %s\nEstado: %s\nCEP: %d",endereco.rua,endereco.num,endereco.cidade,endereco.estado,endereco.cep);
  return 0;
}