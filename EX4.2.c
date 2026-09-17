#include <stdio.h>

int main()
{
    
    float num1;
    float num2;
    float resultado;
    char  operacao;
    
    printf("Por favor, digite um número:");
    scanf("%f", &num1);
    
    printf("Digite a operação (+, - , *, /):");
    scanf(" %c", &operacao);
    
    printf("Por favor, digite um número:");
    scanf("%f", &num2);
    
    switch (operacao){
        
    case '+':
    resultado = num1 + num2;
    printf("Resultado: %.1f\n", resultado);
        break;
        
    case '-':
    resultado = num1 - num2;
    printf("Resultado: %.1f\n", resultado);
        break;
    
    case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.1f\n", resultado);
            } else {
                printf("Erro: Divisão por zero não permitida.\n");
            }
            break;
    
    case '*':
    resultado = num1 * num2;
    printf("Resultado: %.1f\n", resultado);
        break;
        
        default:
        printf("Opção inválida");
        break;
    }
    
return 0;
}
