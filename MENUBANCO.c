#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.00;
    float deposito;

    do {

        printf("\n=== MENU BANCO ===\n");
        printf("Escolha uma opcao: \n");
        
        printf("1.  Saldo\n");
        printf("2.  Deposito\n");
        printf("3.  Sair\n");
        scanf(" %d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n-> Saldo atual: R$ %.2f\n", saldo);
                break;

            case 2:
                printf("\nDigite o valor do deposito, (por exemplo: 200.00) R$ ");
                scanf(" %f", &deposito);
                
                if (deposito > 0) {
                    saldo += deposito; 
                    printf("-> Deposito realizado com sucesso!\n");
                    printf("-> Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("-> Valor de deposito invalido!\n");
                }
                break;

            case 3:
                printf("\nSaindo do sistema... Obrigado por utilizar nosso banco!\n");
                break;

            default:
                printf("\nOpcao invalida! Por favor, escolha 1, 2 ou 3.\n");
                break;
        }

    } while (opcao != 3);

    return 0;
}