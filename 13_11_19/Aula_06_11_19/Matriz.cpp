#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

/* matriz consiste em uma variável bidimensional caracterizada por linhas e colunas, sempre começando apartir do "0"
e armazenando sempre valores do mesmo tipo
declaração de uma matriz
Tipo nome [linhas][colunas];
int valores[4][4];



for(i=0;i<h;i++){
	for(j=0;j<11;J==)
	printf("



enunciado:
desenvolva um programa onde o usuário preencha uma matriz [3][3], e ao término exiba a matriz resultante*/

int main(){
	int i, j;
	int matriz[3][3];// [linhas] e [colunas]
	
	printf("*** PROGRAMA MATRIZ(/X)***\n\n");
	
	
	printf("---PREENCHENDO MATRIZ:---\n\n");
	for(i=0; i<3;i++){
		for(j=0;j<3;j++){
			printf("MATRIZ[%d][%d]",i,j);
			scanf("%d", &matriz[i][j]);
		}//fechando for "j"
	}//fechando for "i"
	
	printf("\n\n---EXIBINDO MATRIZ---\n\n");
	for(i=0; i<4;i++){
		for(j=0;j<4;j++){
			printf("\t%d|\t", matriz[i][j]);
		}
		printf("\n-------\n");
	}//fechando for "i"
}
