
#include <stdio.h>

int main()
{
    
    float vlr;
    int quant;
    float total;
    float troco;
    float pagamento;
    
    printf("Olá, digite o valor do produto:");
    scanf("%f", &vlr);
    printf("O valor é:%.2f\n", vlr);
    
    printf("Por favor, informe a quantidade: ");
    scanf("%i", &quant);
    printf("A quantidade é:%d\n", quant);
    
total = vlr * quant;
    printf("Total da compra: %.2f\n", total);
    
    printf("digite o valor pago:");
    scanf("%f", &pagamento);
    
troco = pagamento - total;
    printf("Troco: %.2f", troco);
    
    return 0;
}
