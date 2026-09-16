#include <stdio.h>
#include <stdbool.h> 
int main()
{
    
    char nome [500];
    int idade;
    float altura;
    bool CNH;
    char resposta;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("\nNome é: %s", nome );
    
    printf("\nDigite sua idade:");
    scanf("%i", &idade);
    printf("\nIdade é: %i", idade);
    
    printf("\nDigite sua Altura: ");
    scanf("%f", &altura);
    printf("Altura é: %.2f", altura);
    
    printf("\nPossui CNH? ");
    scanf(" %c", &resposta);
    
 if (resposta == 'S' || resposta == 's') {
        printf("Você possui CNH");
        } 

    
     else if (resposta == 'N' || resposta == 'n') {
        printf("Voce não possui CNH.\n");
    } 
    
      else {
     printf("Opcao invalida! Por favor, digite apenas S ou N.\n");
    }
    
}

////////////////////////////////////


    
