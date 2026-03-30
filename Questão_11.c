#include <stdio.h>

int main() {
    float valor_compra, valor_pago, troco;
    int troco_centavos, nota100, nota50, nota20, nota10, nota5, nota2, moeda1, moeda50, moeda25, moeda10, moeda5;
    
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor_compra);
    printf("Digite o valor pago: R$ ");
    scanf("%f", &valor_pago);
    
    troco = valor_pago - valor_compra;
    troco_centavos = (int)(troco * 100);
    
    printf("\nTroco: R$ %.2f\n", troco);
    
    nota100 = troco_centavos / 10000;
    troco_centavos %= 10000;
    
    nota50 = troco_centavos / 5000;
    troco_centavos %= 5000;
    
    nota20 = troco_centavos / 2000;
    troco_centavos %= 2000;
    
    nota10 = troco_centavos / 1000;
    troco_centavos %= 1000;
    
    nota5 = troco_centavos / 500;
    troco_centavos %= 500;
    
    nota2 = troco_centavos / 200;
    troco_centavos %= 200;
    
    moeda1 = troco_centavos / 100;
    troco_centavos %= 100;
    
    moeda50 = troco_centavos / 50;
    troco_centavos %= 50;
    
    moeda25 = troco_centavos / 25;
    troco_centavos %= 25;
    
    moeda10 = troco_centavos / 10;
    troco_centavos %= 10;
    
    moeda5 = troco_centavos / 5;
    troco_centavos %= 5;
    
    printf("\nNotas e moedas para o troco:\n");
    printf("R$ 100: %d\n", nota100);
    printf("R$ 50: %d\n", nota50);
    printf("R$ 20: %d\n", nota20);
    printf("R$ 10: %d\n", nota10);
    printf("R$ 5: %d\n", nota5);
    printf("R$ 2: %d\n", nota2);
    printf("R$ 1: %d\n", moeda1);
    printf("R$ 0,50: %d\n", moeda50);
    printf("R$ 0,25: %d\n", moeda25);
    printf("R$ 0,10: %d\n", moeda10);
    printf("R$ 0,05: %d\n", moeda5);
    
    return 0;
}