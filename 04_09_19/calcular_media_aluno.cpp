#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int av1,av2,av3,re1,re2;
	
	printf("insira sua nota da av1:");
	scanf("%i",&av1);
	printf("\n\n\insira sua nota da av2:");
	scanf("%i",&av2);
	re1= (av1+av2)/2;
		if (re1>=7){
			printf("aprovado");	
		}
		else {
			if(re1>=4){
				printf("\n\nexame\n\ninsira sua nota do exame:");
				scanf("%i",&av3);
			re2=(re1+av3)/3;
			if(re2>=5){
				printf("\naprovado por exame\nsuas notas foram: %i na av1, %i na av2, %i no exame e sua média final foi %i",av1,av2,av3,re2);
			}
			else{
				printf("\n\nreprovado\nsuas notas foram: %i na av1, %i na av2, %i no exame e sua média final foi %i",av1,av2,av3,re2);
			}
			}
			else
			printf("\n\nreprovado");
	}
		
	
	
	
	
	
	
	
	
}
