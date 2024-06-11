#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// Definição das dimensões da matriz
#define LINHAS 5
#define COLUNAS 5

// Função para ler a matriz
void lerMatriz(int matriz[LINHAS][COLUNAS]) {
    // Loop para percorrer as linhas da matriz
    for (int i = 0; i < LINHAS; i++) {
        // Loop para percorrer as colunas da matriz
        for (int j = 0; j < COLUNAS; j++) {
            // Solicita ao usuário que insira um elemento na posição [i][j] da matriz
            printf("Digite o elemento para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]); // Lê o valor inserido pelo usuário e armazena na matriz
        }
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    printf("A matriz é:\n"); // Imprime o cabeçalho da matriz
    // Loop para percorrer as linhas da matriz
    for (int i = 0; i < LINHAS; i++) {
        // Loop para percorrer as colunas da matriz
        for (int j = 0; j < COLUNAS; j++) {
            // Imprime o elemento na posição [i][j] seguido de um espaço
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // Imprime uma nova linha após cada linha da matriz
    }
}

// Função para calcular a soma dos elementos da matriz
int somaElementosMatriz(int matriz[LINHAS][COLUNAS]) {
    int soma = 0; // Inicializa a variável que armazenará a soma dos elementos
    // Loop para percorrer as linhas da matriz
    for (int i = 0; i < LINHAS; i++) {
        // Loop para percorrer as colunas da matriz
        for (int j = 0; j < COLUNAS; j++) {
            soma += matriz[i][j]; // Adiciona o elemento atual à soma
        }
    }
    return soma; // Retorna a soma total dos elementos da matriz
}

int main() {
    int matriz[LINHAS][COLUNAS]; // Declara a matriz de tamanho 5x5

    lerMatriz(matriz); // Chama a função para ler os elementos da matriz
    imprimirMatriz(matriz); // Chama a função para imprimir a matriz
    
    int soma = somaElementosMatriz(matriz); // Chama a função para calcular a soma dos elementos da matriz
    printf("A soma de todos os elementos da matriz é: %d\n", soma); // Imprime a soma dos elementos

    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}
