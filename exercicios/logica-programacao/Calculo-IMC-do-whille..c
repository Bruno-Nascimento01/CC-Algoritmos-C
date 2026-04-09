#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[40], opcao;
    double peso, altura, imc;

    do {
        printf("\nEntre com o seu nome: ");
        scanf("%s", nome);

        printf("Entre com a sua altura (ex: 1.75) %s: ", nome);
        scanf("%lf", &altura);

        printf("Entre com o seu peso (ex: 70.5) %s: ", nome);
        scanf("%lf", &peso);


        imc = peso / (altura * altura);

        printf("\nIMC de %s: %.2lf", nome, imc);

        if (imc < 18.5) {
            printf("\nVoce esta abaixo do peso.");
        } else if (imc < 25.0) {
            printf("\nVoce esta no peso ideal, parabens!");
        } else if (imc < 30.0) {
            printf("\nVoce esta com sobrepeso.");
        } else if (imc < 35.0) {
            printf("\nVoce esta com Obesidade grau 1.");
        } else if (imc < 40.0) {
            printf("\nVoce esta com Obesidade grau 2.");
        } else {
            printf("\nVoce esta com Obesidade grau 3, procure um medico!");
        }

        printf("\n\nDeseja continuar? (S/N): ");
        scanf(" %c", &opcao);

    } while (opcao == 's' || opcao == 'S');

    return 0;
}
