/* Faça um relatório técnico contendo uma análise dos diferentes tipos
e precisões numéricas com short int, float e double na realização de
operações de multiplicação de matrizes. */

// Relatório da linguagem C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
    short matriz1[3][3] = {
        {GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita()},
        {GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita()},
        {GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita()}};
    short matriz2[3][3] = {
        {GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita()},
        {GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita()},
        {GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita()}};
    
    printf("Matrizes short");
    printaMatriz(matriz1);
    printaMatriz(matriz2);
}

int GeradordeImprobabilidadeInfinita()
{
    srand(time(NULL) - rand());
    int resp = rand() % 100;
    return resp;
}

void printaMatriz(short matriz[3][3])
{
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if (y != 2)
            {
                printf(" %2d ", matriz[x][y]);
            }
            else
            {
                printf(" %2d \n", matriz[x][y]);
            }
        }
    }
}

int multiplicaMatrizes(int matriz1[3][3], int matriz2[3][3])
{
    int matrizRes[3][3];
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            matrizRes[x][y] = 0;
            for (int z = 0; z < 3; z++)
            {
                matrizRes[x][y] += matriz1[x][z] * matriz2[z][y];
            }
        }
    }
    return matrizRes;
}

/* - Realize experimentos comparando os tempos de execução das linguagens
com as operações de multiplicação de matrizes quadradas com diferentes
valores: 𝑁 = {500, 1000, 1500, 2000, 2500, 3000} */