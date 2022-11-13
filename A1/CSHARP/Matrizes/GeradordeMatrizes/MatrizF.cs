using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace CSHARP.GeradordeMatrizes
{
    internal class MatrizF
    {
        public float[,] matrizF = new float[3, 3];
        public float[,] getMatrizF()
        {
            return matrizF;
        }

        public void setMatrizF()
        {
            this.matrizF = new float[3, 3] {
                { GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() },
                { GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() },
                { GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() }
            };
        }

        static float GeradordeImprobabilidadeInfinita()
        {
            Random aleatorio = new();
            float valor = float.Parse((aleatorio.NextDouble() * 100).ToString());
            return valor;
        }

        public static void printaMatriz(float[,] matriz)
        {
            for (int x = 0; x < 3; x++)
            {
                for (int y = 0; y < 3; y++)
                {
                    if (y != 2)
                    {
                        Console.Write(matriz[x, y]);
                        Console.Write("  ");
                    }
                    else
                    {
                        Console.Write(matriz[x, y]);
                        Console.Write("\n");
                    }
                }
            }
        }

        public static void multiplicaMatrizFLOAT(float[,] matriz1, float[,] matriz2)
        {
            float[,] matrizRes = new float[3, 3];

            for (int x = 0; x < 3; x++)
            {
                for (int y = 0; y < 3; y++)
                {
                    matrizRes[x, y] = 0;
                    for (int z = 0; z < 3; z++)
                    {
                        matrizRes[x, y] += matriz1[x, z] * matriz2[z, y];
                    }
                }
            }
            printaMatriz(matrizRes);
        }
    }
}
