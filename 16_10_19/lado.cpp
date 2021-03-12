/* desenvolva um programa onde o usuário informe a medida do lado de um triangulo retangulo e o programa
desenhe o

*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	int alt,larg,lado,s=0;
	

	printf("digite a medida do lado\t");
	scanf("%d",&lado);
	
	system("cls");
	
	
	for(alt=0;alt<=lado;alt++){
		for(larg=0;larg<=alt;larg++){
			printf("+");			
		}
		printf("\n");
	}
	printf("\n\n");
	system("pause");

		
	
	
	
}

