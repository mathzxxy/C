#include <stdio.h>   // Biblioteca padrão de entrada e saída (printf, scanf, etc.)
#include <string.h>  // Biblioteca para manipular strings (ex: strlen, strcspn)

int main(void) {     // Função principal, ponto de entrada do programa

    int idade;              // Variável para armazenar a idade do usuário (número inteiro)
    char nome[100];         // Vetor (array) de caracteres para armazenar o nome do usuário
    char email[100];        // Vetor de caracteres para armazenar o email do usuário

    // Solicita a idade do usuário
    printf("Digite sua idade: ");
    scanf("%d", &idade);    // Lê a idade e armazena na variável 'idade'

    getchar();              // Limpa o caractere '\n' deixado no buffer pelo scanf

    // Solicita o nome completo do usuário
    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);     // Lê a linha completa (com espaços) e armazena em 'nome'
    nome[strcspn(nome, "\n")] = '\0';     // Remove o caractere '\n' do final da string, se existir

    // Solicita o email do usuário
    printf("Digite seu email: ");
    fgets(email, sizeof(email), stdin);   // Lê o email completo
    email[strcspn(email, "\n")] = '\0';   // Remove o '\n' do final da string

    // Mostra os dados informados pelo usuário
    printf("\nIdade: %d\n", idade);           // Exibe a idade com %d (formato inteiro)
    printf("Nome Completo: %s\n", nome);      // Exibe o nome com %s (formato string)
    printf("Email: %s\n", email);             // Exibe o email com %s

    return 0;     // Indica que o programa terminou com sucesso
}
