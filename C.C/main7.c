#include <stdio.h>

int main() {//ajuda de CHATGPT,duvidas em passa para o lado direito
    int h;

    printf("Digite o número de linhas do triângulo: ");
    scanf("%d", &h);

    // Gera o triângulo alinhado à direita
    for (int i = 0; i <= h; i++) {
        // Imprime espaços
        for (int j = 0; j <= h - i; j++) {//INT
            printf(" ");
        }
        // Imprime asteriscos
        for (int k = 0; k <= i; k++) {//INT K
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
