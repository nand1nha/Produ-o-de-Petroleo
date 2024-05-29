#include "trabalho.h"

int main(){
    int linhas, colunas, quant; // a variavel linhas guarda as linhashas do tabuleiro, colunas as colunasnas e quant a quantidade de bandeiras
    cabeca *p = criapilha();
    /*Parte para as entradas*/
    // o scanf abaixo recebe a quantidade de linhashas e colunasnas do tabuleiro
    scanf("%d %d", &linhas, &colunas);
    // o scanf abaixo recebe a quantidade de bandeiras do tabuleiro
    scanf("%d", &quant);
    

    /*Parte para alocação da matriz*/
    // essa variavel matriz vai ser o tabuleiro
    int **matriz; 
    // aloca um vetor de n ponteiros para linhashas
    matriz = malloc (linhas * sizeof (int*)) ;
    // aloca cada uma das linhashas (vetores de m inteiros)
    for (int i=0; i < colunas; i++)
        matriz[i] = malloc (colunas* sizeof (int)) ;


    matriz = preenchetabuleiro(matriz, linhas, colunas);
    imprime(matriz, linhas, colunas);

    printf("\n\n\n");
    int pInicial= matriz[0][0];
    transforma(matriz, 1, linha, coluna, 0 ,0, 3,  colunas,  linhas, pInicial);
    imprimepilha(p);
    return 0;
} 

