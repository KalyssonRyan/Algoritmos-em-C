/*
1 – Codifique, compile e execute um programa contendo uma função que mostre como saída a
seguinte tela:
==================================
+ Algoritmos +
+--------------------------------------------------------- +
+ Instituto Federal de Goiás +
+ Campus Formosa +
==================================
Faça uma chamada à essa função dentro da função principal.
*/
#include <stdio.h>
int cabecalho(){
  printf("==================================\n");
  printf("+ Algoritmos +\n");
  printf("+--------------------------------------------------------- +\n");
  printf("+ Instituto Federal de Goiás +\n");
  printf("+ Campus Formosa +\n");
  printf("==================================\n");
}
int main(){
  cabecalho();
  return 0;
}