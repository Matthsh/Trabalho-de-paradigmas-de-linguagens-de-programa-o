package GeradoresdeMatrizes;

import java.util.Random;

public class MatrizF {
	
	
	public float[][] matrizF = { 
			{ GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() },
			{ GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() },
			{ GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() } 
	};
	
	public float[][] getMatrizF() {
		return matrizF;
	}

	public void setMatrizF(float[][] matrizF) {
		this.matrizF = matrizF;
	}
	
	
	
	public static void printaMatriz(float[][] matriz) {
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++) {
				if (y != 2) {
					System.out.printf(" %2f ", matriz[x][y]);
				} else {
					System.out.printf(" %2f \n", matriz[x][y]);
				}
			}
		}
	}
	
	
	
	static float GeradordeImprobabilidadeInfinita() {
		Random aleatorio = new Random();
		float valor = aleatorio.nextFloat(100);
		return valor;
	}

	
	
	public static void multiplicaMatrizFLOAT(float[][] matriz1, float[][] matriz2) {
		float[][] matrizRes = new float[3][3];

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
