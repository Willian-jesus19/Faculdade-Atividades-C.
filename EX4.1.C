#include <stdio.h>

int main()
{
    int dia;
    
    printf("Escolha uma data entre (1 E 7:)");
    scanf("%i", &dia);
    
    switch (dia) {
        case 1:
        printf("Domingo:");
        break;
        
        case 2:
        printf("Segunda:");
        break;
    
        case 3:
        printf("Terça:");
        break;
        
        case 4:
        printf("Quarta-feira:");
        break;
        
        case 5:
        printf("Quinta-Feira");
        break;
        
        case 6:
        printf("Sexta-Feira");
        break;
        
        case 7:
        printf("Sábado");
        break;
        
        case 8:
        printf("Dia inválido, refaça a operação!");
        break;
    }
    
        
    }
