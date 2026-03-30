#include <stdio.h>

int main(){
    float cm, polegadas;
    printf("Digite o valor em centímetros: ");
    scanf("%f", &cm);
    polegadas = cm / 2.54;
    printf("O valor em polegas é: %.2f", polegadas);
    return 0;

}