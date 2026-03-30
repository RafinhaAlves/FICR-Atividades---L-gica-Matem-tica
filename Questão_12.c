#include <stdio.h>

int main() {
    float media1, media2, soma_medias, media_das_medias;
    
    media1 = (7 + 8 + 9) / 3.0;
    media2 = (4 + 5 + 6) / 3.0;
    
    soma_medias = media1 + media2;
    media_das_medias = soma_medias / 2.0;
    
    printf("Média dos números 7, 8 e 9: %.2f\n", media1);
    printf("Média dos números 4, 5 e 6: %.2f\n", media2);
    printf("Soma das médias: %.2f\n", soma_medias);
    printf("Média das médias: %.2f\n", media_das_medias);
    
    return 0;
}