/*Escreva um programa em C que repita 50 vezes os
seguintes passos:
• recebe quatro números inteiros;
• calcula a soma desses números; e
• mostra o resultado na tela.
→Utilize a estrutura de repetição while.
→Utilize a estrutura de repetição do-while.
→Utilize a estrutura de repetição for.*/
#include <stdio.h>
#include <locale.h>
#define GRN "\e[0;32m"
#define RESET "\e[0;37m"
#define RED "\e[0;31m"
#define YEL "\e[0;33m"
int main(){
  int num,soma=0,quantidade,resultado,num1,num2,num3,num4; //Aqui eu especifiquei as Variaveis que iria usar//
  printf(GRN"Vamos Calcular,Digite 4 números"RESET); //Aqui é onde printo a mensagem inicial//
  do{ //Esse DO vai repetir enquanto o número que eu digitar for maior que o usuario digitar for maior que 0//
    quantidade=1; //Nessa Variavel vai ser o contador Pra sair desse loop,como quero que ele rode 1 vez eu vou diminuir o valor no while abaixo,e quando ele for < = a 0 ele para,//
    while(quantidade>=0){ //Como eu falei, quando quantidade chegar em 0 o while acaba//
      printf("\n Digite: "); //Aqui vai printar pro usuario digitar//
    scanf("%d",&num1); //Aqui ele vai salvar na váriavel num1 e etc,todos esses printf e scanf abaixo é pra isso,cada um na sua variavel propria,numero 1 na num1 ,numero 2 na num2 e etc//
      printf("\n Digite: ");
      scanf("%d",&num2);
      printf("\n Digite: ");
      scanf("%d",&num3);
      printf("\n Digite: ");
      scanf("%d",&num4);
      quantidade=quantidade-2; //Quando ele acabar de armazenar os valores nas variaveis quero q a variavel quantidade se torne 0,assim o while para//
      printf("\nO número atual é: %d",num); //Aqui é só um teste pra ver se ta funcionando msm
      
    }
      for(int i=1;i<=50;i++){ //Dentro do for criei uma váriavel i,que vai valer 1,toda vez que o for rodar esse i vai ganhar +1,e ele vai parar quando i for <=50//
        soma=num1+num2+num3+num4; //O que acontece dentro do for é q ele pegar a variavel soma que é 0(tem que colocar que ela é zero,se não da errado)e soma com as outras variaveis num1,num2 etc mais  ,assim essa soma vai se repetir 50 vezes aqui dentro//
      printf("\nsoma é: %d",soma); //Aqui é só um teste pra ver se ta rodando mesmo//
      }
    printf(GRN"\nSoma disso tudo 50 vezes é:"RESET "%d",soma); //Depois de rolar tudo lá em cima,ele terminar as 50 vezes ele só vai passar pra esse lado de cá e vai imprimir o resultado//
    num=0;
    }while(num>0);
    
  return 0;
}