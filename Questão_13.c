#include <stdio.h>

int main() {
    float preco_fabrica, preco_final;
    
    printf("Digite o preço de fábrica do automóvel: R$ ");
    scanf("%f", &preco_fabrica);
    
    preco_final = preco_fabrica + (preco_fabrica * 0.45) + (preco_fabrica * 0.28);
    
    printf("Preço de fábrica: R$ %.2f\n", preco_fabrica);
    printf("Impostos (45%%): R$ %.2f\n", preco_fabrica * 0.45);
    printf("Revendedor (28%%): R$ %.2f\n", preco_fabrica * 0.28);
    printf("Preço final do automóvel: R$ %.2f\n", preco_final);
    
    return 0;
}