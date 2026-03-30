#include <stdio.h>

int main() {
    int x, y;
    printf("Digite dois nuúmeros inteios: ");
    scanf("%d %d", &x, &y);
    printf("Quociente: %i \nresto: %i", x/y,x%y);
    return 0;
}