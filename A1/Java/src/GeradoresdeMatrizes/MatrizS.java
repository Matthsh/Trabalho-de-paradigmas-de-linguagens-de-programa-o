package GeradoresdeMatrizes;

import java.util.Random;

public class MatrizS {
	public short[][] matrizS = { 
			{ GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() },
			{ GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() },
			{ GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() } 
	};
	
	public short[][] getMatrizS() {
		return matrizS;
	}

	public void setMatrizS(short[][] matrizS) {
		this.matrizS = matrizS;
	}

	static short GeradordeImprobabilidadeInfinita() {
		Random aleatorio = new Random();
		short valor = (short) aleatorio.nextInt(100);
		return valor;
	}
	
	public static void printaMatriz(short[][] matriz) {
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++) {
				if (y != 2) {
					System.out.printf(" %2d ", matriz[x][y]);
				} else {
					System.out.printf(" %2d \n", matriz[x][y]);
				}
			}
		}
	}
	
	public static void multiplicaMatrizSHORT(short[][] matriz1, short[][] matriz2) {
		short[][] matrizRes = new short[3][3];

		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++) {
				matrizRes[x][y] = 0;
				for (int z = 0; z < 3; z++) {
					matrizRes[x][y] += matriz1[x][z] * matriz2[z][y];
				}
			}
		}
		printaMatriz(matrizRes);
	}

}
