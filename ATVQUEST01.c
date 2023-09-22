// ATVQUEST01

#include <stdio.h>
#include <math.h>

int main() {
  double num;
  
  printf("Digite um valor positivo e maior que zero: \n");
  scanf("%lf", &num);
  
  if (num <= 0) {
        printf("O valor deve ser positivo e maior que zero.\n");
        return 1;
    }
  
  printf("\nO valor digitado foi: %.2lf\n", num);
  
  printf("\nO número ao quadrado: %.2lf\n", num * num);
  printf("O número ao cubo: %.2lf\n", num * num * num);
  printf("A raiz quadrada do número: %.2lf\n", sqrt(num));
  printf("A raiz cúbica do número: %.2lf\n", cbrt(num));
  printf("O resto da divisão por 3: %.2lf:", fmod(num, 3.0));
  
  return 0;
}