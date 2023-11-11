#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");
  int peso;
  float altura;
  printf("Digite o teu Peso: \t");
  scanf("%d",& peso);
  printf("Digite a sua altura: \t");
  scanf("%f",&altura);

  if (peso>0 && peso <60 && altura>0 && altura <1.20 ){
    printf("A sua classificação é A"); 
  }
  else if(peso>=60 && peso<=90 && altura>0 && altura< 1.20){
     printf("A sua classificação é D"); 
  }
  else if(peso>90 && altura >0 && altura < 1.20){
     printf("A sua classificação é G"); 
  }
  else if (peso>0 && peso<60 && altura >=1.20 && altura <1.70 ){
    printf("A sua classificação é B"); 
  }
  else if(peso >=60 && peso <=90 && altura >=1.20 && altura <1.70){
    printf("A sua classificação é E");
  }
  else if(peso >90 && altura>=1.20 && altura <1.70){
    printf("A sua classificação é H");
  }
  else if (peso >0 && peso <60 && altura >1.70){
    printf("A sua classificação é C");
  }
  else if(peso >=60 && peso<=90 && altura >1.70){
    printf("A sua classificação é F");
  }
  else if (peso >90 && altura >1.70){
    printf("A sua classificação é I");
  }
  else{
    printf("Peso ou altura invalído!");
  }
    return 0;
}