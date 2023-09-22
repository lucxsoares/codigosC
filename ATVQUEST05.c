//ATVQUEST05
#include <stdio.h>

int main () {
    int idade, i, contador1 = 0;
    float somaId = 0;
    float peso, altura, mIdade, porcentagem;
    float contador2 = 0, contador3 = 0;

    for (i = 1; i <= 10; i++) {
        printf("\nDados pessoais %d:  \n", i);
        printf("Digite a idade:  ");
        scanf("%d", &idade);
        printf("\nDigite o peso:  ");
        scanf("%f", &peso);
        printf("\nDigite a altura:  ");
        scanf("%f", &altura);  

        somaId = somaId + idade;
        mIdade = somaId / 10;

        if (peso > 80 && altura < 1.50) {
            contador1++;
        }

        if (altura > 1.90) {
            contador3++;
            if (idade >= 10 && idade <= 30) {
                contador2++;
            }
        }
    }

    // Calcular a porcentagem após o loop
    porcentagem = (contador2 / contador3) * 100;

    printf("A média de idades é igual a %.2f \n", mIdade);
    printf("%d Pessoas estão acima de 80kg e com altura inferior a 1.50m \n", contador1);
    printf("Das pessoas que têm mais de 1.90m, %.1f porcento estão na faixa de 10-30 anos. \n", porcentagem);

    return 0;
}