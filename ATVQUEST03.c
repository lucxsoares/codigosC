// ATVQUEST03
#include <stdio.h>

int main() {
    int v1, v2, v3;
    int opcao;

    // pedir os valores
    printf("Digite o primeiro número: ");
    scanf("%d", &v1);
    printf("Digite o segundo número: ");
    scanf("%d", &v2);
    printf("Digite o terceiro número: ");
    scanf("%d", &v3);

    // Mostrar opções na tela
    printf("\n1 - Mostre os números em ordem crescente\n");
    printf("2 - Mostre os números em ordem decrescente\n");
    printf("3 - Mostre o menor número entre os demais.\n");
    printf("Escolha a opção desejada: ");
    scanf("%d", &opcao);
     
  // opcao 1
    if (opcao == 1) {
        if (v1 <= v2 && v2 <= v3) {
            printf("\nOrdem crescente: %d - %d - %d\n", v1, v2, v3);
        } else if (v1 <= v3 && v3 <= v2) {
            printf("\nOrdem crescente: %d - %d - %d\n", v1, v3, v2);
        } else if (v2 <= v1 && v1 <= v3) {
            printf("\nOrdem crescente: %d - %d - %d\n", v2, v1, v3);
        } else if (v2 <= v3 && v3 <= v1) {
            printf("\nOrdem crescente: %d - %d - %d\n", v2, v3, v1);
        } else if (v3 <= v1 && v1 <= v2) {
            printf("\nOrdem crescente: %d - %d - %d\n", v3, v1, v2);
        } else {
            printf("\nOrdem crescente: %d - %d - %d\n", v3, v2, v1);
        }
     
    // opcao 2
    } else if (opcao == 2) {
        if (v1 >= v2 && v2 >= v3) {
            printf("\nOrdem decrescente: %d - %d - %d\n", v1, v2, v3);
        } else if (v1 >= v3 && v3 >= v2) {
            printf("\nOrdem decrescente: %d - %d - %d\n", v1, v3, v2);
        } else if (v2 >= v1 && v1 >= v3) {
            printf("\nOrdem decrescente: %d - %d - %d\n", v2, v1, v3);
        } else if (v2 >= v3 && v3 >= v1) {
            printf("\nOrdem decrescente: %d - %d - %d\n", v2, v3, v1);
        } else if (v3 >= v1 && v1 >= v2) {
            printf("\nOrdem decrescente: %d - %d - %d\n", v3, v1, v2);
        } else {
            printf("\nOrdem decrescente: %d - %d - %d\n", v3, v2, v1);
        }
      
    // opcao 3
    }  else if (opcao == 3) {
      if (v1 <= v2 && v1 <= v3) {
        printf("\n%d - %d - %d",v2, v1, v3);
        printf("\nou %d - %d - %d",v3, v1, v2);
      } else if (v2 <= v1 && v2 <= v3) {
         printf("\n%d - %d - %d",v1, v2, v3);
         printf("\nou %d - %d - %d",v3, v2, v1);
      } else {
        printf("\n%d - %d - %d",v1, v3, v2);
        printf("\nou %d - %d - %d",v2, v3, v1);
        
      }
    }
    return 0;
}