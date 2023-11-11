#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");
  float tralab,avaseme,examfinal,resultado;
  printf("Digite a nota do trabalho de laboratório: \t");
  scanf("%f",&tralab);
  printf("Digite a nota da avaliação semestral: \t");
  scanf("%f",&avaseme);
  printf("Digite a nota do Exame Final: \t");
  scanf("%f",&examfinal);
  resultado=(tralab+avaseme+examfinal)/3;
  if(resultado>=0 && resultado <5.0){
    // se a média do aluno estiver entre 0,0 e 5,0, então seu conceito é
    printf("A sua nota foi %0.2f e o seu conceito é E",resultado);
  }
  else if(resultado>=5.0 && resultado<6.0){
    printf("A sua nota foi %0.2f e o seu conceito é D",resultado);
  }
  else if(resultado>=6.0 && resultado<7.0){
    //se estiver entre 6,0 e 7,0, seu conceito é C,
    printf("A sua nota foi %0.2f e o seu conceito é C",resultado);
  }
  else if (resultado>= 7.0 && resultado<8.0){
    //se estiver entre 7,0 e 8,0, seu conceito é B
     printf(" A sua nota foi %0.2f e o seu conceito é B",resultado);
  }
  else if (resultado>=8.0 && resultado<10.0){
    //e se estiver entre 8,0 e 10,0, seu conceito é A.
    printf("A sua nota foi %0.2f e o seu conceito é A",resultado);
  }
  else {
    printf("\nAlgum campo foi digitado incorretamente,resultado inválido!");
  }
  
  
  return 0;
}