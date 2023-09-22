// ATVQUEST04
#include <stdio.h>
int main() {
  int num1,numero, fatorial;
  printf("\nDigite um número inteiro que seja positivo ou 0 para finalizar: \n");
  scanf("%d", &num1);

  
while (num1 != 0) {
  numero = num1;
  for(fatorial = 1; num1 > 1; num1 = num1 - 1) {      
      fatorial = fatorial * num1;
  }

printf("\nO fatorial de %d é =  %d\n", numero, fatorial);

  printf("\nDigite um número inteiro que seja positivo ou 0 para sair \n");
  scanf("%d", &num1);
}
  
return 0;
}