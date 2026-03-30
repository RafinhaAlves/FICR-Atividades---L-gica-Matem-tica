#include <stdio.h>

int main() {
    int x, y, s;
    printf("Digite dois números inteiros");
    scanf("%i %i", &x, &y);
    s = x * y;
    printf ("O produto de %d por %d é: %d.", x, y, s);
    return 0; 
}