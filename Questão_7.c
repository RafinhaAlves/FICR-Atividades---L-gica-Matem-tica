#include <stdio.h>
#include <math.h>

int main() {
    float r, h, area, volume;
    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);
    area = 2 * M_PI * r * (h + r);
    volume = M_PI * r * r * h;
    printf("Área do cilindro: %.2f\n", area);
    printf("Volume do cilindro: %.2f\n", volume);
    return 0;
}