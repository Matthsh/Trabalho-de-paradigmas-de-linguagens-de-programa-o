using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace CSHARP.GeradordeMatrizes
{
    internal class MatrizD
    {
        public double[,] matrizD = new double[3, 3];
        public double[,] getMatrizD()
        {
            return matrizD;
        }

        public void setMatrizD()
        {
            this.matrizD = new double[3, 3] {
                { GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() },
                { GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() },
                { GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() }
            };
        }

        static double GeradordeImprobabilidadeInfinita()
        {
            Random aleatorio = new();
            double valor = aleatorio.NextDouble() * 100;
            return valor;
        }

        public static void printaMatriz(double[,] matriz)
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

        public static void multiplicaMatrizDOUBLE(double[,] matriz1, double[,] matriz2)
        {
            double[,] matrizRes = new double[3, 3];

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
