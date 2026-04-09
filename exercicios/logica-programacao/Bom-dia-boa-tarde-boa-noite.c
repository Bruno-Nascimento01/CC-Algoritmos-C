#include <stdio.h>
#include <stdlib.h>

int main() {
    char turno;

    do {
        printf("\n################################################################################");
        printf("\nOlá, qual o seu turno? (M-matutino, V-vespertino, N-noturno, F-finalizar): ");

        
        scanf(" %c", &turno);

        if (turno == 'M' || turno == 'm') {
            printf("\nBom dia!");
        } else if (turno == 'V' || turno == 'v') {
            printf("\nBoa tarde!");
        } else if (turno == 'N' || turno == 'n') {
            printf("\nBoa noite!");
        } else if (turno == 'F' || turno == 'f') {
            printf("\n--------Programa finalizado!---------");
        } else {
            printf("\nComando invalido! Digite somente M, V, N ou F.");
           
        }

    } while (turno != 'F' && turno != 'f'); 

    return 0;
}
