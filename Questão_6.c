#include <stdio.h>
int main() {
    float r, c;
    printf("Digite o valor do raio: ");
    scanf("%f", &r);
    c = 3.14*r*r;
    printf("O valor da área é: %.2f", c);
    return 0;

}