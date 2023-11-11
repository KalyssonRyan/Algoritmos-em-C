/*6 – Defina as estruturas cuja representação gráfica é dada a seguir:
a- crie um vetor com 7 elementos Cadastro.
b- permita ao usuário entrar com dados para preencher esse 7 cadastros.
c- encontre a pessoa com maior idade entre os cadastrados
d- encontre as pessoas do sexo masculino
e- encontre as pessoas com salário maior que 1000
f- imprima os dados da pessoa cuja identidade seja igual à um valor fornecido pelo usuário */
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
struct Cadastro{
  //nome ,identidade,telefone,endereço,cpf,idade,salario,estado civil,sexo
  char nome[100];
  int identidade,telefone,cpf,idade,salario;  
  char endereco[100];
  char estadocivil[100];
  char sexo[100];
};
struct Adress{
  char rua[100];
  char cidade[100];
  char estado[100];
  int cep,num;
  
};

int main(){
  setlocale(LC_ALL, "portuguese");
  struct Cadastro cadastro[7];
  struct Adress endereco[7];
  int i,midade=0,masculino[7]={0},salario[7],op,indice_maior_idade = 0;
  //lembre de alterar o valor de 3 para 7 no final
  for(i=0;i<7;i++){
    //system("clear");
    printf("\nVamos fazer o %d° cadastro\n",(i+1));
    printf("\nDigite o seu nome: ");
    scanf("%s",cadastro[i].nome);
    printf("Digite a sua identidade: ");
    scanf("%d",&cadastro[i].identidade);
    printf("Digite o  seu telefone: ");
    scanf("%d",&cadastro[i].telefone);
    printf("Digite o seu endereço ");
    //Endereco
    printf("\nDigite o nome da sua rua: ");
    scanf("%s",endereco[i].rua);
    printf("Digite o número da casa: ");
    scanf("%d",&endereco[i].num);
    printf("Digite a sua cidade: ");
    scanf("%s",endereco[i].cidade);
    printf("Digite o seu estado: ");
    scanf("%s",endereco[i].estado);
    printf("Digite o seu CEP: ");
    scanf("%d",&endereco[i].cep);
    //
    printf("Digite o seu CPF: ");
    scanf("%d",&cadastro[i].cpf);
    printf("Digite a sua idade: ");
    scanf("%d",&cadastro[i].idade);
    printf("Digite o seu salário: ");
    scanf("%d",&cadastro[i].salario);
    printf("Digite o seu estado civil: ");
    scanf("%s",cadastro[i].estadocivil);
    do{
      printf("\n1-Masculino\n2-Feminino\n3-Prefiro não falar\nDigite o seu sexo: ");
      scanf("%d",&op);
      
      switch(op){
        case 1:
        strcpy(cadastro[i].sexo, "Masculino");
        op=1;
        break;
        case 2:
        strcpy(cadastro[i].sexo, "Feminino");
        op=1;
        break;
        case 3:
        strcpy(cadastro[i].sexo, "Não especificado");
        op=1;
        break;
        default:
        printf("Por favor digite apenas um dos valores especificados");
        op=0;
        break;
        
      
    }
    }while(op==0);
  }
  //lembre de alterar o valor de 3 para 7 no final
  for(int i=0;i<7;i++){
      if(cadastro[i].idade>midade){
        midade= cadastro[i].idade;
        indice_maior_idade = i;
      }
      if(strcmp(cadastro[i].sexo,"Masculino")==0){
       masculino[i]=1; 
      }
      
          
    }
    printf("\n------------------------------");
    printf("\nA maior idade entre os registros é: %d\nPertencente a: %s",midade,cadastro[indice_maior_idade].nome);
  for(int i=0;i<7;i++){
    if(cadastro[i].salario>1000){
      printf("\n------------------------------");
      printf("\nRecebe mais que R$1000 Nome: %s \n",cadastro[i].nome);
    
    }
  }
   for (int i = 0; i < 7; i++) {
      /*if (strcmp(cadastro[i].sexo, "Masculino") == 0) {
        printf("------------------------------");
        printf("\nDo Sexo masculino Nome: %s\n", cadastro[i].nome);
      }*/
     if(masculino[i] ==1){
       printf("\n------------------------------");
        printf("\nDo Sexo masculino Nome: %s\n", cadastro[i].nome);
       
     }
}
  do{
    printf("\n\nDigite a identidade da pessoa que deseja encontrar(digite -1 caso deseje sair):");
    scanf("%d",&op);
    if(op!=-1){
      int fail =0;
      for(int i=0;i<7;i++){
        if(cadastro[i].identidade == op){
          //nome ,identidade,telefone,endereço,cpf,idade,salario,estado civil,sexo
            printf("\n------------------------------");
            printf("\nNome: %s",cadastro[i].nome);
            printf("\nIdentidade: %d",cadastro[i].identidade);
            printf("\nTelefone: %d",cadastro[i].telefone);
            printf("\nRua: %s\nNúmero: %d\nCidade: %s\nEstado: %s\nCEP: %d",endereco[i].rua,endereco[i].num,endereco[i].cidade,endereco[i].estado,endereco[i].cep);
            printf("\nCPF: %d",cadastro[i].cpf);
            printf("\nIdade: %d",cadastro[i].idade);
            printf("\nSalario: R$%d",cadastro[i].salario);
            printf("\nEstado civil: %s",cadastro[i].estadocivil);
            printf("\nSexo: %s",cadastro[i].sexo);
            printf("\n------------------------------");
            //endereco
            fail=1;
            break;
        }
        
    
      }
      if(!fail){
        printf("\nIdentidade não encontrada");
    }
    }
    
  }while(op!=-1);
  printf("\nVolte sempre :>");

  return 0;
}