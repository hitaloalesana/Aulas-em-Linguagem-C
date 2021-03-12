#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	long n1,n2,n3;
	char resp;
	setlocale(LC_ALL,"");
	
	do{
		system("cls");
		printf("********PROGRAMA MAIOR**************\n\n\n");
		
		printf("\nprimeiro número;");
		scanf("%d",&n1);
		printf("\nsegundo número;");
		scanf("%d",&n2);
		printf("\nterceiro número;");
		scanf("%d",&n3);
		if (n1>n2){
			if (n1>n3)
			printf("%d é o maior número.",n1);
			else{
				printf("%d é o maior número.",n3);
			}
		}
		else{
			if(n2>n1){
				if(n2>n3){
				printf("%d é o maior número.",n2);
				}
			}else{
				printf("%d é o maior número.",n3);
			}
		}
		
		
		
		printf("\n\nnova consulta?:S/N");
		scanf("%s",&resp);
	}while(resp == 's');
		 
	
	
	
	
	
	printf("\n\n");
	system("pause");
	
}
