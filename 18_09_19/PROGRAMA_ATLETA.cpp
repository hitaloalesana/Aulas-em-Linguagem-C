#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<conio.h>

/* Um treinador de basquete necessita distribuir seus atletas em níveis de acordo com a altura de cada um.
NÍVEL A - Até 1,70
NÍVEL B - 1,71 --> 1,80
NÍVEL C - 1,81 --> 1,90
NÍVEL D - ACIMA DE 1,90

ao Termino da Distribuição o Treinador deve Saber quantos Atletas foram encaminhados
para cada nível e deverá ser exibido na telam a altura do menor jogador, que sera excluído do time.
faça o programa que melhor solucione o problema descrito..*/

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
			printf("\nNível A: %d");
			break;
		
		Case 2(Alt>=1.71 && <1.80):
			nivelB++;
			printf("\nNível A: %d");
			break;	
		
	}
	
	
	
	system("cls");
	}while(Alt != 0);
	
	
	system("cls");
	printf("\n\n***** PROGRAMA ATLETAS SHINGEKI NO KYOJIN *****\n");

	
	
	printf("\n\n");
	system("pause");
} 


