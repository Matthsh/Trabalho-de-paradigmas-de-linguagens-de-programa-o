// See https://aka.ms/new-console-template for more information
using CSHARP.GeradordeMatrizes;

namespace program
{
    public class Aplication
    {

        public static void Main(String[] args)
        {

            //Matrices short
            Console.WriteLine("matrizes short: ");

            Console.WriteLine("\nmatriz 1: ");
            MatrizS matrizs1 = new MatrizS();
            matrizs1.setMatrizS();
            MatrizS.printaMatriz(matrizs1.getMatrizS());

            Console.WriteLine("\nmatriz 2: ");
            MatrizS matrizs2 = new MatrizS();
            matrizs2.setMatrizS();
            MatrizS.printaMatriz(matrizs2.getMatrizS());

            Console.WriteLine("\nmatriz resultante short: ");
            MatrizS.multiplicaMatrizSHORT(matrizs1.getMatrizS(), matrizs2.getMatrizS());


            //Matrices float
            Console.WriteLine("\n\nmatrizes float: ");

            Console.WriteLine("\nmatriz 1: ");
            MatrizF matrizf1 = new MatrizF();
            matrizf1.setMatrizF();
            MatrizF.printaMatriz(matrizf1.getMatrizF());

            Console.WriteLine("\nmatriz 2: ");
            MatrizF matrizf2 = new MatrizF();
            matrizf2.setMatrizF();
            MatrizF.printaMatriz(matrizf2.getMatrizF());

            Console.WriteLine("\nmatriz resultante float: ");
            MatrizF.multiplicaMatrizFLOAT(matrizf1.getMatrizF(), matrizf2.getMatrizF());


            //Matrices double
            Console.WriteLine("\n\nmatrizes double: ");

            Console.WriteLine("\nmatriz 1: ");
            MatrizD matrizd1 = new MatrizD();
            matrizd1.setMatrizD();
            MatrizD.printaMatriz(matrizd1.getMatrizD());

            Console.WriteLine("\nmatriz 2: ");
            MatrizD matrizd2 = new MatrizD();
            matrizd2.setMatrizD();
            MatrizD.printaMatriz(matrizd2.getMatrizD());

            Console.WriteLine("\nmatriz resultante double: ");
            MatrizD.multiplicaMatrizDOUBLE(matrizd1.getMatrizD(), matrizd2.getMatrizD());



        }

    }
}