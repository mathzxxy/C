#include <stdio.h>

int main() {
    int h;

    printf("Digite o número de linhas do triângulo: ");
    scanf("%i", &h);


    for (int i = 0; i <= h; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
