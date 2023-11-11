#include <stdio.h>
struct Aluno{
char nome[15];
int nota;
};
int main(){
  struct Aluno a[10];
  int i,maior=0,pos=-1,soma=0,media;
  for(i=0;i<10;i++){
    printf("digite o nome: ");
    scanf("%s",a[i].nome);
    fflush(stdin);
    printf("Digite a nota: ");
    scanf("%d",&a[i].nota);
    if (maior<a[i].nota){
      maior= a[i].nota;
      pos=i;
      
    }
    soma+=a[i].nota;
    
  }
  media=soma/i;
  printf("%s",a[pos].nome);
}