#include <stdio.h>
#include <locale.h>
int main() {
  char estado;
  printf("\n\nconsiderando que \‘c\’ é para casado, \‘s\’ para solteiro, \‘v\’ para viúvo, \‘d’\ para divorciado e ‘q’ para desquitado: \t");
  printf("\n\ndigite o teu estado civil: \t");
  scanf("%c",&estado);
  switch(estado){
    case 'c':
    case 'C':printf("\nTu é Casado\(a\)\n");
    break;
    case 's':
    case 'S':printf("\nTu é Solteiro\(a\)\n");
    break;
    case 'v':
    case 'V':printf("\n Tu é Viúvo\(a\)");
    break;
    case 'q':
    case 'd':
    case 'Q':printf("\n Tu é Desquitado\(a\)");
    break;
    default:printf("Digite um caractere válido");

    
  }
  
  return 0;
}
