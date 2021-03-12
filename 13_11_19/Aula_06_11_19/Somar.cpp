/* desenvolva um programa onde usuário preencha 2 matrizes [3][3] e gere uma terceira matriz com a soma das anteriores */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int matA[3][3], matB[3][3], matC[3][3];
int i,j;

void preencherMatriz(int tmpMat[3][3]){
	printf("---PREENCHENDO MATRIZ:---\n\n");
	for(i=0; i<3;i++){
		for(j=0;j<3;j++){
			printf("MATRIZ[%d][%d]",i,j);
			scanf("%d", &tmpMat[i][j]);
		}//fechando for "j"
	}//fechando for "i"
	printf("\n\nMatriz Preenchida!!");
}

void somar(){
	for(i=0; i<3;i++){
		for(j=0;j<3;j++){
			matC[i][j] = matA[i][j] + matB[i][j];			
		}//fechando for "j"
	}//fechando for "i"
}

void exibirMatriz(int tmpMat[3][3]){
	printf("---PREENCHENDO MATRIZ:---\n\n");
	for(i=0; i<3;i++){
		for(j=0;j<3;j++){
			printf("%d|",&tmpMat[i][j]);
		}//fechando for "j"
		printf("\n-------------------\n");
	}//fechando for "i"
}

int main(){
	printf(" *** SOMA DE MATRIZES***\n\n");
	
	preencherMatriz(matA);
	printf("\n\n");
	preencherMatriz(matB);
	printf("\n-----------\n");
	
	somar();
	
	
	exibirMatriz(matC);
	getch();
	
	
	
	
	
}
