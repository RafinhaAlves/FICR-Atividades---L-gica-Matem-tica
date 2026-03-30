#include <stdio.h>

int main (){
    int x;
    printf("Digite um número inteio: ");
    scanf("%d", &x);
    printf("%i < %i < %i", x-1, x, x+1);
    return 0;
}