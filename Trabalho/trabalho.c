#include "trabalho.h"

void imprime(int **matriz, int linhas, int colunas){
    // percorre e imprime a matriz
    for(int i = 0;i<linhas;i++){
        printf("\n");
        for(int j = 0;j<colunas;j++){
            printf("%d ", matriz[i][j]);
        }
    }

}

int **preenchetabuleiro(int **matriz, int linhas, int colunas){
    // percorre e preenche a matriz
    for (int i=0; i < linhas; i++)
    for (int j=0; j < colunas; j++)
        scanf("%d", &matriz[i][j]);
    return matriz;
    
}

void transforma(int **matriz, int colunas, int linhas, cabeca *p){
    for(int i = 0;i<linhas;i++){
        for(int j = 0;j<colunas;j++){
            p = empilha(p,matriz[i][j]);
            }
        }   
}

void transforma(int **matriz, int x,int c,int l, int i, int j, int band, int pInicial){
    matriz[0][0] = band; 
    while(x<(c*l)){
        if(i-1>=0 && matriz [i-1][j] == pInicial){
            matriz[i-1][j] = band;
            transforma(matriz,x+1,c,l,i-1,j,band,pInicial);
        }
        if(j-1>=0 && matriz [i][j-1] == pInicial){
              matriz[i][j-1] = band;
              transforma(matriz,x+1,c,l,i,j-1,band,pInicial);
         }
         if(j+1<c && matriz [i][j+1] == pInicial){
             matriz[i][j+1] = band;
             transforma(matriz,x+1,c,l,i,j+1,band,pInicial);
         }
         if(i+1<l && matriz [i+1][j] == pInicial){
            matriz[i+1][j] = band;
            transforma(matriz,x+1,c,l,i+1,j,band,pInicial);
         }else{
            return;
         }
   }   
}










///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
cabeca *criapilha(){
    cabeca *novo = ((cabeca *) calloc(1, sizeof(cabeca)));
    if (novo == NULL)
    {
        printf("ERRO NA ALOCAÇAO");
        exit(1);
    }
    return novo;

} pilha *criano(int carac){
    pilha *novo = ((pilha *) calloc(1, sizeof(pilha)));
    if (novo == NULL)
    {
        printf("ERRO NA ALOCAÇAO");
        exit(1);
    }
    novo->caracter = carac;
    return novo;
}



cabeca *empilha(cabeca *p, int carac){
    pilha *novo = criano(carac);
    pilha *aux= p->prox;
    if(p->prox==NULL){
        p->prox= novo;
        p->ant=novo;
    }else{
        novo->prox= aux;
        aux->ant = novo;
        p->prox = novo;
    }
    p->quant ++;
    return p;
}

/*void desempilha(cabeca *p){
    pilha *aux = p->prox;
    if (aux==NULL)
    {
        printf("lista esta vazia");
    }else{
        if (aux->prox!=NULL)
        {
            p->prox=aux->prox;
            aux->prox->ant = NULL;
        }else
        {
            p->prox = NULL;
            p->ant = NULL;  
        }
        free(aux);
        p->quant --;
    }
}*/
void imprimepilha(cabeca *p){
    printf("| %d | ", p->quant);
    pilha *aux = p->prox;
    while (aux!=NULL)
    {
        printf(" %d ",aux->caracter);
        aux=aux->prox;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
