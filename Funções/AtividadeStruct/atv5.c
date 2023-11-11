/*5 – Codifique, compile e execute um programa em C que crie uma estrutura representando os alunos do
curso de Programação. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da
segunda prova e nota da terceira prova. O programa deve executar as seguintes ações:
a- permitir ao usuário entrar com os dados de 5 alunos
b- encontrar o aluno com maior nota da primeira prova
c- encontrar o aluno com maior média geral
d- encontrar o aluno com menor média geral e- para cada aluno armazenado na estrutura diga se ele foi
aprovado ou reprovado, considerando o valor 7 para aprovação. 
*/
#include <stdio.h>
#include <locale.h>
struct Aluno{
  int matricula;
  char nome[100];
  float p1;
  float p2;
  float p3;
};

  
  

int main(){
  setlocale(LC_ALL, "portuguese");
  int Maiorn = 0,Maiorm,Menorm,aprovado[5];
  float media[5],Mediaf[5];
  struct Aluno alunos[5];
  for(int i=0;i<5;i++){
    float somar=0.0;
    printf("\nDigite a matrícula do %d° aluno: ",i+1);
    scanf("%d",&alunos[i].matricula);
    printf("\nDigite o nome do %d° aluno: ",i+1);
    scanf("%s",alunos[i].nome);
    printf("\nDigite a nota da 1° prova do %d° aluno: ",i+1);
    scanf("%f",&alunos[i].p1);
    printf("\nDigite a nota da 2° prova: ");
    scanf("%f",&alunos[i].p2);
    printf("\nDigite a nota da 3° prova: ");
    scanf("%f",&alunos[i].p3);
      somar+=alunos[i].p1+alunos[i].p2+alunos[i].p3;
      Mediaf[i]=somar/3;
        }
    
    for (int i = 1; i < 5; i++) {
      
      if (alunos[i].p1 > alunos[Maiorn].p1) {
            Maiorn = i;
        }
      if(Mediaf[i] > Mediaf[Maiorm]){
        Maiorm = i;
      } else if(Mediaf[i]<Mediaf[Maiorm]){
        Menorm= i;
      }

      
    }
    printf("\nAluno com a maior nota na 1° prova:\n");
    printf("Nome: %s\n", alunos[Maiorn].nome);
    printf("Nota: %.2f\n", alunos[Maiorn].p1);
    printf("\nAluno com a maior média geral:\n");
    printf("Nome: %s\n", alunos[Maiorm].nome);
    printf("\nAluno com a menor média geral:\n");
    printf("Nome: %s\n", alunos[Menorm].nome);
    printf("\nResultado:\n");
    for(int i=1;i<5;i++){
      if(Mediaf[i]>=7.0){
        printf("Nome: %s Aprovado\n", alunos[i].nome);
      }
      else{
        printf("Nome: %s Reprovado\n", alunos[i].nome);
      }
    }
    
  return 0;
}