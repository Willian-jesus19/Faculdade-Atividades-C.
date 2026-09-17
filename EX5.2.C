#include <stdio.h>



int main (){

int soma = 0;
int i;

    for (int i = 2; i <= 100; i +=2){
	soma +=i;
	}

    printf("\n A soma dos valores pares de 1 a 100 é: %i", soma);

return 0;
    
}
