#include <stdio.h>
// Inclui a biblioteca padrão para entrada e saída (funções como printf e scanf)

int main() {
    // Função principal onde o programa começa a rodar

    int time1;
    int time2;
    // Declara duas variáveis inteiras para armazenar os placares dos times

    printf("digite o placar do time 1:");
    // Pede para o usuário digitar o placar do time 1

    scanf("%d", &time1);
    // Lê o valor digitado e armazena na variável time1

    printf("digite o placar do time 2:");
    // Pede para o usuário digitar o placar do time 2

    scanf("%d", &time2);
    // Lê o valor digitado e armazena na variável time2

    if(time1 > time2){
        // Verifica se o placar do time 1 é maior que o do time 2

        printf("\ntime 1 ganhou!!!");
        // Se for maior, exibe que o time 1 ganhou

    } else {
        // Se não for maior, verifica outra condição

        if (time2 > time1){
            // Verifica se o placar do time 2 é maior que o do time 1

            printf("\ntime 2 ganhou!!!");
            // Se for maior, exibe que o time 2 ganhou

        } else {
            // Caso contrário, os placares são iguais

            printf("\nDEU EMPATE!!!");
            // Exibe mensagem de empate
        }
    }

    return 0;
    // Finaliza o programa com sucesso
}
