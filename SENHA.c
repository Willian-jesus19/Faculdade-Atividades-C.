#include <stdio.h>
#include <string.h>

int main() {
    char senha[50];

    do {
        printf("Digite a senha: ");
        scanf("%s", senha);

        // Se a senha for diferente de "1234", exibe o alerta
        if (strcmp(senha, "1234") != 0) {
            printf("Senha incorreta! Tente novamente.\n\n");
        }

    } while (strcmp(senha, "1234") != 0); // Repete ENQUANTO for diferente de "1234"

    printf("\nAcesso permitido! Seja bem-vindo.\n");

    return 0;
}