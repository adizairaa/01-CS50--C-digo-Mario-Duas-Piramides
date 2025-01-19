#include <cs50.h>  // Inclui a biblioteca CS50 de funções como get_int.
#include <stdio.h> // Inclui a biblioteca padrão para entrada e saída de dados (como printf).

void print(char c, int n);

int main(void)
{
    int n;

    // Solicita ao usuário a altura da pirâmide e garante que o valor esteja entre 1 e 8.
    // Explicação do loop do-while:(faça enquanto)
    // 1 Executa o bloco pelo menos uma vez.
    // 1 Continua repetindo enquanto a condição (n < 1 || n > 8) for verdadeira, se falsa o codigo para.
    // lembrar das aulas da professora jaqueline.
    do
    {
        n = get_int("height: "); // Pede ao usuário um número inteiro para altura da piramideno nosso caso será 8.
    } while (n < 1 || n > 8);   // Garante que o valor seja entre 1 e 8.

    // Loop principal para construir as linhas da pirâmide.
    // A variável 'i' representa o índice da linha atual (começa em 0 e vai até n-1).
    for (int i = 0; i < n; i++)
    {
        // Imprime espaços à esquerda para alinhar a pirâmide.
        // A quantidade de espaços é calculada como 'n - 1 - i'.
        print(' ', n - 1 - i);

        // Imprime o lado esquerdo da pirâmide com '#'.
        // A quantidade de '#' aumenta a cada linha: i + 1.
        print('#', i + 1);

        // Imprime os dois espaços centrais entre as pirâmides.
        print(' ', 2);

        // Imprime o lado direito da pirâmide com '#'.
        // O número de '#' é igual ao lado esquerdo (i + 1).
        print('#', i + 1);

        // Finaliza a linha com uma quebra de linha.
        printf("\n");
    }
}

// Função auxiliar para imprimir um caractere 'c' repetido 'n' vezes.
// Essa função é usada para evitar repetição de código no loop principal.
void print(char c, int n)
{
    for (int i = 0; i < n; i++) // Itera 'n' vezes.
    {
        printf("%c", c); // Imprime o caractere 'c' sem quebra de linha.
    }
}
