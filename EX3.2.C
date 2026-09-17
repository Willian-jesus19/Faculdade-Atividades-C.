#include <stdio.h>

int main()
{
    

    float nota;
        
        printf("Olá, digite sua nota:");
        scanf("%f", &nota);
        printf("Sua nota é: %.1f\n", nota);
        
        if (nota >= 7.0){
            printf("Aprovado!\n");
        }
        
        else if (nota >= 5.0 && nota <=6.9){
            printf("Recuperação!\n");
        }
        
        else if (nota < 5.0){
            printf("Reprovado!\n");
        }
    return 0;
}
