/*Dado um natural n>=1, informe se ele é
triangular. Um número é triangular se a sua
quantidade de círculos forma um triângulo
equilátero.
Exemplo:

1 3 6 10 15 21*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, Tn, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    Tn = 0;
    i = 1;

    while (Tn < n) {
        Tn = (i * (i + 1)) / 2;
        i++;
    }

    if (Tn == n) {
        printf("%d é um número triangular.\n", n);
    } else {
        printf("%d não é um número triangular.\n", n);
    }

    return 0;
}
