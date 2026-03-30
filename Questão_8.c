#include <stdio.h>

int main() {
    float salario_fixo, total_vendas, salario_final;
    
    printf("Digite o salário fixo do vendedor: R$ ");
    scanf("%f", &salario_fixo);
    printf("Digite o total de vendas efetuadas: R$ ");
    scanf("%f", &total_vendas);
    
    salario_final = salario_fixo + (total_vendas * 0.15);
    
    printf("Salário fixo: R$ %.2f\n", salario_fixo);
    printf("Salário final: R$ %.2f\n", salario_final);
    
    return 0;
}