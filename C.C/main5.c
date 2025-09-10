#include <stdio.h>

int main() {
    int i;
    float numero, soma = 0;

    printf("Digite 10 números\n");

    for (i = 1; i <= 10; i++) {
        printf("Número %d:", i);
        scanf("%f", &numero);
        soma += numero;
    }

    printf("A soma dos 10 números é: %.2f\n", soma);

    return 0;
}
