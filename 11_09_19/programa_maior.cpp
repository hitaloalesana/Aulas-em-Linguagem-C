#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int n1,n2,n3;
	char resp;
	setlocale(LC_ALL,"");
	
	do{
		system("cls");
		printf("********PROGRAMA MAIOR**************\n\n\n");
		
		printf("\nprimeiro n�mero;");
		scanf("%i",&n1);
		printf("\nsegundo n�mero;");
		scanf("%i",&n2);
		printf("\nterceiro n�mero;");
		scanf("%i",&n3);
		if(n1>n2 && n1>n3){
			printf("\n%i � maior que %i e %i.",n1,n2,n3);
			}else if(n2>n1 && n2>n3){
				printf("\n%i � maior que %i e %i.",n2,n1,n3);
			}	
		else{
			printf("\n%i � maior que %i e %i.",n3,n2,n3);
		}
		printf("\n\nnova consulta?:S/N");
		scanf("%s",&resp);
	}while (resp == 's','y');
	
	
	
	
	printf("\n\n");
	system("pause");
	
}
