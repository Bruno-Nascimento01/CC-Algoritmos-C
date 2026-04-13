
#include <stdio.h>
#include <stdlib.h>

#define TAM_ABC 5

#define TAM_D 15
main () {

    int A[TAM_ABC], B[TAM_ABC], C[TAM_ABC], D[TAM_D];
    int i;

    printf ("*** Informe os valores do vetor A ***\n");
    for (i = 0; i < TAM_ABC; i++) {
        printf ("A[%d]: ", i);
        scanf ("%d", &A[i]);
    }

    printf ("\n*** Informe os valores do vetor B ***\n");
    for (i = 0; i < TAM_ABC; i++) {
        printf ("B[%d]: ", i);
        scanf ("%d", &B[i]);
    }

    printf ("\n*** Informe os valores do vetor C ***\n");
    for (i = 0; i < TAM_ABC; i++) {
        printf ("C[%d]: ", i);
        scanf ("%d", &C[i]);
    }

    for (i = 0; i < TAM_ABC; i++) {
        D[i] = A[i];
        D[i + 5] = B[i];
        D[i + 10] = C[i];
    }

    printf ("\n*** Valores do vetor D ***\n");
    for (i = 0; i < TAM_D; i++) {
        printf ("D[%d] = %d\n", i, D[i]);
    }
    printf ("\n\n");
    system ("PAUSE");
}
