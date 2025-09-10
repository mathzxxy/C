#include <stdio.h>   // Biblioteca padrão para entrada (scanf) e saída (printf)
#include <stdlib.h>  // Biblioteca para funções gerais (não usada aqui, mas incluída)

// Comentário explicando o que o programa faz: pede um número e diz se é par ou ímpar

int main(int argc, char *argv[]) {   // Função principal do programa, ponto de partida
    // argc e argv são parâmetros para argumentos da linha de comando (não usados aqui)

    int n1;      // Declara uma variável inteira chamada n1, para armazenar o número do usuário

    // Solicita ao usuário que digite um número
    printf("Digite um valor para conferir se e impar ou par:\n");

    // Lê o número digitado e armazena na variável n1
    scanf("%d", &n1);

    // Testa se o número é par ou ímpar usando o operador módulo (%)
    // Se o resto da divisão por 2 for zero, o número é par
    if(n1 % 2 == 0){
        printf("E par");    // Mostra que o número é par
    } else {
        printf("E impar");  // Caso contrário, mostra que é ímpar
    }

    return 0;   // Finaliza o programa com sucesso
}
