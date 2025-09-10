#include <stdio.h>

int main() {
    int i;
    for (i = 1; i < 100; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
//O for começa de i = 1, que já é ímpar.
//Em vez de checar se o número é ímpar, o i += 2 faz o contador pular direto para o próximo número ímpar.
//Ou seja: 1 → 3 → 5 → 7 → ... até 99.
//Assim, você não precisa de if, porque já está pegando só os ímpares.