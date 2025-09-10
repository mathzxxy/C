#include <stdio.h>

int main() {
    int h;
    printf("Digite o número de linhas do triângulo invertido: ");
    scanf("%d", &h);

    for (int i = h; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
