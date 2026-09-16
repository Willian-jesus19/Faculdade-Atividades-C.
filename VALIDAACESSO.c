#include <stdio.h>
#include <stdbool.h>


int main()
{
    
    int idade; 
    float altura;
    bool permitido = false;
    
    printf("Informe sua idade:");
    scanf("%d", &idade);
    
    printf("Informe sua altura:");
    scanf("%f", &altura);
    
    if (idade >= 12 && altura >= 1.40){
        permitido = true;
        printf("Acesso permitido!\n");
    }
    
    else if(idade < 12){
        printf("Acesso negado: Menor de idade!\n");
    }
    
    else if (altura < 1.40){
        printf("Acesso negado: Altura inferior!");
        
    }
    return 0;
    
}
