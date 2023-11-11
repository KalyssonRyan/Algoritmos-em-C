/*
3 – Codifique, compile e execute um programa em C que crie uma estrutura Pessoa com os seguintes
campos: nome, sexo, peso, data de nascimento e endereço. Em seguida defina uma variável do tipo da
estrutura Pessoa e leia os valores para cada um dos seus campos. Ao final, imprima os valores armazenados
em cada campo da estrutura na tela.
Obsimp: Crie uma nova estrutura para Data e utilize a estrutura Endereço implementada no exercício
anterior (Questão 2).
*/
#include <stdio.h>
#include <locale.h>
struct Pessoa{
  char nome[100];
  char sexo[100];
  float peso;
  
};
struct Data{
  int dia;
  int mes;
  int ano;
};
struct Adress{
  char rua[100];
  char cidade[100];
  char estado[100];
  int cep;
  int num;
  
};
int main(){
  setlocale(LC_ALL, "portuguese");
  struct Pessoa pessoa;
  struct Data data;
  struct Adress endereco;
 //Pessoa
  printf("\nDigite o seu nome: ");
  scanf("%s",pessoa.nome);
  printf("\nDigite o seu sexo: ");
  scanf("%s",pessoa.sexo);
  printf("\nDigite o seu peso: ");
  scanf("%f",&pessoa.peso);
  //data
  printf("\nEm que ano você nasceu?:");
  printf("\nDia: ");
  scanf("%d",&data.dia);
  printf("\nMês: ");
  scanf("%d",&data.mes);
  printf("\nAno: ");
  scanf("%d",&data.ano);
  //Endereço
  printf("\nDigite o nome da sua rua: ");
  scanf("%s",endereco.rua);
  printf("\nDigite o número da casa: ");
  scanf("%d",&endereco.num);
  printf("\nDigite a sua cidade: ");
  scanf("%s",endereco.cidade);
  printf("\nDigite o seu estado: ");
  scanf("%s",endereco.estado);
  printf("\nDigite o seu CEP: ");
  scanf("%d",&endereco.cep);
  // parte de imprimir agora
  printf("\nConfirme os seus dados:");
  printf("\nNome: %s\nSexo: %s\nPeso: %0.2f",pessoa.nome,pessoa.sexo,pessoa.peso);
  
  printf("\nData de nascimento: %02d/%02d/%d",data.dia,data.mes,data.ano);
    
  
  printf("\nRua: %s\nNúmero: %d\nCidade: %s\nEstado: %s\nCEP: %d",endereco.rua,endereco.num,endereco.cidade,endereco.estado,endereco.cep);
  
  return 0;
}