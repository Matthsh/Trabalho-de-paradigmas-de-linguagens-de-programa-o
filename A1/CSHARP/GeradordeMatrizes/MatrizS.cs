using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace CSHARP.GeradordeMatrizes
{
    internal class MatrizS
    {
        public int[,] matrizD = new int[3, 3];
        public int[,] getMatrizS()
        {
            return matrizD;
        }

        public void setMatrizS()
        {
            this.matrizD = new int[3, 3] { 
                { GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() },
                { GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() },
                { GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() }
            };
        }

        static int GeradordeImprobabilidadeInfinita()
        {
            Random aleatorio = new();
            int valor = aleatorio.Next(100);
            return valor;
        }

        public static void printaMatriz(int[,] matriz)
        {
            for (int x = 0; x < 3; x++)
            {
                for (int y = 0; y < 3; y++)
                {
                    if (y != 2)
                    {
                        Console.Write(matriz[x,y]);
                        Console.Write("  ");
                    }
                    else
                    {
                        Console.Write(matriz[x,y]);
                        Console.Write("\n");
                    }
                }
            }
        }

        public static void multiplicaMatrizSHORT(int[,] matriz1, int[,] matriz2)
        {
            int[,] matrizRes = new int[3,3];

            for (int x = 0; x < 3; x++)
            {
                for (int y = 0; y < 3; y++)
                {
                    matrizRes[x,y] = 0;
                    for (int z = 0; z < 3; z++)
                    {
                        matrizRes[x,y] += matriz1[x,z] * matriz2[z,y];
                    }
                }
            }
            printaMatriz(matrizRes);
        }
    }
}
