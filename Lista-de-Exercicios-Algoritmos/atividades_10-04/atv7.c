#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");
  float preco;
  int origem;
  printf("Digite o preço do produto: \t");
  scanf("%f",&preco);
  printf("\nDigite o Código de origem: \t");
  scanf("%d",&origem);
  
  switch(origem){
    case 1:
    printf("o preço é %0.2f e a procedência é do  Sul",preco);
    break;
    case 2:
    printf("o preço é %0.2f e a procedência é do  Norte",preco);
    break;
    case 3:
    printf("o preço é %0.2f e a procedência é do  Leste",preco);
    break;
    case 4:
    printf("o preço é %0.2f e a procedência é do  Oeste",preco);
    break;
    case 5:
    printf("o preço é %0.2f e a procedência é do  Nordeste",preco);
    break;
    case 6:
    printf("o preço é %0.2f e a procedência é do  Sudeste",preco);
    break;
    case 7:
    printf("o preço é %0.2f e a procedência é do  Centro-Oeste",preco);
    break;
    case 8:
    printf("o preço é %0.2f e a procedência é do Centro Sul",preco);
    break;
    default:
    printf("o Preço é %0.2f, e o produto é importado",preco);
  }
  return 0;
}