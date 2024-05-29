#ifndef __PILHA_H__
#define __PILHA_H__

/* Inclusão de bibliotecas necessárias para o pacote */
#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
    int caracter;
    struct pilha *ant, *prox;
}pilha;

typedef struct cabeca{
    int quant;
    struct pilha *ant, *prox;
}cabeca;

/*
Função: preenchetabuleiro
Descrição: preenche o tabuleiro com os valores informados
Entrada:
    int **matriz = tabuleiro a ser preenchido
    int linhas  = numero de linhas 
    int colunas = numero de colunas
Saída:
    matriz preenchida
*/
int **preenchetabuleiro(int **matriz, int linhas, int colunas );

/*
Função: imprime
Descrição: imprimeos o tabuleiro
Entrada:
    int **matriz = tabuleiro a ser preenchido
    int linhas  = numero de linhas 
    int colunas = numero de colunas
Saída:
    sem saída
*/
void imprime(int **matriz, int linhas, int colunas );


void transforma(int **matriz, int colunas, int linhas, cabeca *p);
















/* Cabeçalhos das funções com suas respectivas descrições */

/*
Função: criano
Descrição: Aloca dinamicamente uma estrutura pilha e inicializa os campos com os dados passados como parâmetro.
Entrada:
    int caracter = recebe o caracter para a comparação
Saída:
    ponteiro para a estrutura pilha alocada dinâmicamente
*/
pilha *criano (int carac);

/*
Função: criapilha
Descrição: Aloca dinamicamente uma estrutura pilha e inicializa os campos com os dados passados como parâmetro.
Entrada:

Saída:
    ponteiro para a estrutura pilha alocada dinâmicamente
*/
cabeca *criapilha();

/*
Função: imprime
Descrição: printa a pilha
Entrada:
    pilha *p: ponteiro para uma estrutura pilha
Saída: void
*/
void imprimepilha(cabeca *p);

/*
funçao: empilha
descrição: Empilha os nos na pilha
entrada:
    pilha *p: ponteiro para uma estrutura do tipo pilha
    int caracter: o caracter que vai ser empilhado
saida:
    ponteiro para a entrutura pilha
*/
cabeca *empilha(cabeca *p, int carac);
#endif

