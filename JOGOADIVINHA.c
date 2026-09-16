#include <stdio.h>

int main() {
    const int NUMSECRETO = 42;
    int chute;

    printf("=== JOGO DA ADIVINHACAO ===\n");

    do {
        printf("Tente adivinhar o numero secreto: ");
        scanf(" %d", &chute);


        if (chute < NUMSECRETO) {
            printf("Tente um numero MAIOR!\n\n");
        } else if (chute > NUMSECRETO) {
            printf("Tente um numero MENOR!\n\n");
        }

    } while (chute != NUMSECRETO);
    printf("\nPARABENS! Voce acertou o numero! (%d)!\n", NUMSECRETO);

    return 0;
}