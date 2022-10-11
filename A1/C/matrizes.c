/* Faça um relatório técnico contendo uma análise dos diferentes tipos
e precisões numéricas com short int, float e double na realização de
operações de multiplicação de matrizes. */

// Relatório da linguagem C
#include <stdio.h>

void main(void)
{
    int matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int matrizRes[3][3];

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            matrizRes[x][y] = 0;
            for (int z = 0; z < 3; z++)
            {
                matrizRes[x][y] += matriz1[x][z] * matriz2[z][y];
            }
            if (x != 2)
            {
                printf(" %d ", matrizRes[x][y]);
            }
            else
            {
                printf(" %d \n", matrizRes[x][y]);
            }
        }
    }
}

/* - Realize experimentos comparando os tempos de execução das linguagens
com as operações de multiplicação de matrizes quadradas com diferentes
valores: 𝑁 = {500, 1000, 1500, 2000, 2500, 3000} */