/* Crie um programa em C que exiba o menu de opções
abaixo. O programa deve receber como entrada vários
Números até que o valor -1 seja digitado. Calcule e mostre
o resultado de acordo com a opção escolhida pelo usuário.
(1) Soma dos números digitados
(1) Quantidade de números digitados
(1) Média dos números digitados
(1) Maior número digitado
(1) Menor número digitado
(6 )Média dos números pares
(7) Sair
• O programa deve encerrar sua execução quando a opção 7
(Sair) for informada pelo usuário.*/
#include <locale.h>
#include <stdio.h>
#define ANSI_COLOR_GREEN "\e[1;92m" 
#define ANSI_COLOR_GRAY  "\e[0;37m"

int main() {
  setlocale(LC_ALL, "portuguese");
  float num, resultado = 1, quantidade, maior, menor;
  int opcao, numpar, par ,quantics6,media,soma;
  do{
    printf(ANSI_COLOR_GREEN "\n\n Qual Operação Deseja Fazer? :\n\(1\)Soma dos números digitados\n\(2\)Quantidade de números digitados\n\(3\)Média dos números digitados\n\(4\)Maior Número digitado\n\(5\)Menor Número digitado\n\(6\)Média dos números pares\n\(7\)Sair\nDigite o respectivo número: \t" ANSI_COLOR_GRAY);
    scanf("%d", &opcao);
      
    switch (opcao) {
    case 1:
      do {
        printf(
            "\n\nBora lá,digite alguns números,quando quiser parar digite -1 : ");
        scanf("%f", &num);
        resultado = resultado + num;
  
      } while (num >= 0);
      printf("a soma é: %0.2f\n", resultado);
  
      break;
    case 2:
      resultado = -1;
      do {
        printf(
            "\n\nBora lá,digite alguns números,quando quiser parar digite -1 : ");
        scanf("%f", &num);
        resultado = resultado + 1;
      } while (num >= 0);
      printf("\nA quantidade de números digitados é: %0.2f\n", resultado);
  
      break;
    case 3:
      quantidade = -1;
      do {
        printf(
            "\n\nBora lá,digite alguns números,quando quiser parar digite -1 : ");
        scanf("%f", &num);
        quantidade = quantidade + 1;
        resultado = resultado + num;
  
      } while (num >= 0);
      printf("\nA quantidade de números digitados é: %0.2f\n",
             resultado / quantidade);
  
      break;
    case 4:
      maior = 0;
      do {
        printf(
            "\n\nBora lá,digite alguns números,quando quiser parar digite -1 : ");
        scanf("%f", &num);
        if (num > maior) {
          maior = num;
        }
      } while (num >= 0);
  
      printf("\nO maior números digitado é: %0.2f\n", maior);
      break;
    case 5:
      printf(
          "\n\nBora lá,digite alguns números,quando quiser parar digite -1 : ");
      scanf("%f", &num);
      maior = num;
      menor = num;
      do {
        printf(
            "\n\nBora lá,digite alguns números,quando quiser parar digite -1 : ");
  
        scanf("%f", &num);
        if (num > maior && num != -1) {
          maior = num;
        } else if (num < menor && num != -1) {
          menor = num;
        }
  
      } while (num >= 0);
  
      printf("\nO menor número digitados é: %0.2f\n",menor);
      break;
  
    case 6:
    soma=0;
    quantics6=0;
      while(numpar!=-1){
      printf("\n\nBora lá,digite alguns números,quando quiser parar digite -1 : ");
      scanf("%d",&numpar);    

      if(numpar%2==0){
          soma=soma+numpar;
          quantics6=quantics6+1;
          printf("\nA Quantidade no momento é: %d",quantics6);
        }
      }
      media =soma/quantics6;
      printf("A media dos números pares é: %d",media);
      
      break;
      case 7:
      break;
      default:
        printf("Digite números válidos");
      break;
    }
    }while(opcao!=(-1) && opcao!=7);
  if(opcao==7){
      printf("Volte sempre :>");
      
  }
    


  return 0;
}