#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<conio.h>

/* Um treinador de basquete necessita distribuir seus atletas em n�veis de acordo com a altura de cada um.
N�VEL A - At� 1,70
N�VEL B - 1,71 --> 1,80
N�VEL C - 1,81 --> 1,90
N�VEL D - ACIMA DE 1,90

ao Termino da Distribui��o o Treinador deve Saber quantos Atletas foram encaminhados
para cada n�vel e dever� ser exibido na telam a altura do menor jogador, que sera exclu�do do time.
fa�a o programa que melhor solucione o problema descrito..*/

int main(){
	int nivelA=0, nivelB=0, nivelC=0, nivelD=0;
	float MenorAlt,Alt;
	
	
	setlocale(LC_ALL,"");
	
	do{
	
	printf("\n\n***** PROGRAMA ATLETAS SHINGEKI NO KYOJIN *****\n");
	printf("\n\nInsira a Altura do Atleta:");
	scanf("%f",&Alt);
	
	switch(Nivel){
		
		Case 1(Alt<=1.70):
			nivelA++;
			printf("\nN�vel A: %d");
			break;
		
		Case 2(Alt>=1.71 && <1.80):
			nivelB++;
			printf("\nN�vel A: %d");
			break;	
		
	}
	
	
	
	system("cls");
	}while(Alt != 0);
	
	
	system("cls");
	printf("\n\n***** PROGRAMA ATLETAS SHINGEKI NO KYOJIN *****\n");

	
	
	printf("\n\n");
	system("pause");
} 


