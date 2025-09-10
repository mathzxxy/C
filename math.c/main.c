#include <stdio.h>
// Biblioteca padrão para entrada e saída (printf, scanf)

int main() {
    // Função principal onde o programa começa a execução

    float n1, n2;
    // Declara duas variáveis do tipo ponto flutuante (números decimais)

    printf("Digite o primeiro numero:\n");
    // Pede para o usuário digitar o primeiro número

    scanf("%f", &n1);
    // Lê o número digitado pelo usuário e armazena na variável n1

    printf("Digite o segundo numero:\n");
    // Pede para o usuário digitar o segundo número

    scanf("%f", &n2);
    // Lê o segundo número digitado e armazena na variável n2

    float soma = n1 + n2;
    // Calcula a soma dos dois números e guarda na variável 'soma'

    printf("O resultado é: %.2f\n", soma);
    // Exibe o resultado da soma, mostrando duas casas decimais

    return 0;
    // Finaliza o programa indicando que tudo ocorreu bem
}

