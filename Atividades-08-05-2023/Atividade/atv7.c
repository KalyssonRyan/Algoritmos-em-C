/*
7-Codifique ,compile e execute um programa que leia 7 números inteiros quaisquer no intervalo de [0,9] e armazene em um vetor.Caso o usuário digite um valor fora do intervalo de [0,9], o programa deve insistir até que ,seja fornecido um valor válido.em seguida calcule e exiba a quantidade de números 2,3 e 5 presentes na sequencia(utilize switch case)
*/
#include <stdio.h>
#include <locale.h>
int main(){
  setlocale(LC_ALL, "portuguese");
  int vetor[7],num2=0,num3=0,num5=0;
  for(int i=0;i<7;i++){
    printf("\nDigite números entre 0 e 9\nDigite o %d° número: ",i+1);
    scanf("%d",&vetor[i]);
    switch(vetor[i]){
      case 0:
      break;
      case 1:
      break;
      case 2:
      break;
      case 3:
      break;
      case 4:
      break;
      case 5:
      break;
      case 6:
      break;
      case 7:
      break;
      case 8:
      break;
      case 9:
      break;
      default:
        printf("Digite apenas Números de 0 a 9!");
        i=i-1;
      break;
    }
    
  }
    for(int i=0;i<7;i++){
      if(vetor[i]==2){
        num2+=+1;
      }
      if(vetor[i]==3){
        num3+=1;
      }
      if(vetor[i]==5){
        num5+=1;
      }
    }
    printf("\nA quantidade de números 2 são: %d\nA quantidade de números 3 digitados são: %d\nA quantidade de números 5 digitados são: %d",num2,num3,num5);
  
  return 0;
}
