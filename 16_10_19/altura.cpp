/*
ana possui 1,12m de altura e cresce 3cm por ano enquanto seu irmão carlos possui, 82cm de altura e cresce 5cm por ano.

desenvolva um programa que calcule quantos anos serão necessários para que carlos ultrapasse ana
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

int main(){
	setlocale(LC_ALL,"");
	
	float ana=1.12,carlos=0.82;
	int ano=0;
	
	while(carlos<ana){
		ana+=0.03;
		carlos+=0.05;
		ano++;
	}
	printf("%d\n",ano);
	printf("ana tem: %0.2f de altura\n",ana);
	printf("carlos tem: %.2f de altura\n",carlos);
	
	
	
}
