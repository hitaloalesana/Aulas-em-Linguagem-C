#include<stdio.h>
#include<stdlib.h>
#include<locale.h>//aceita caracteres de acordo com o idioma do sistema
#include<string.h>//manipula texto

/* um alambique possu� em seu quadro de funcion�rios, pessoas especializadas em vendas que recebem seus sal�rios calculados
por meio da comiss�o sobre o valor dos produtos vendidos al�m do sal�rio fixo, tal comiss�o, varia tamb�m de acordo com
o n�vel do funcion�rio, como mostra a tabela abaixo:

NIV�L    /   NOME    /  SAL�RIO   /   COMISS�O 
-------------------------------------------------
1           ZECA      800,00             5%
2          PEDRO      1000,00            8%
3          NINO       1200,00           10%
4          BIBA       1500,00           15          


a empresa necessita de um programa que auxilie no calculo do sal�rio final de seus funcion�rios de acordo
com suas vendas.*/



int main(){
	//declara��o de variav�is
	float SFixo,Comissao,TotalVendas,SFinal;
	int nivel;
	char nome[6], resp; 
	
	setlocale(LC_ALL,"");
	
	do{
		system("cls");
		printf("***** PROGRAMA CACHA�A FROM HELL INC.*****\n\n");
		//desenvolvimento
		printf("n�vel do funcion�rio:\n");
		scanf("%d",&nivel);
		
		if(nivel==1){
			SFixo=800.00;
			Comissao=0.05;
			strcpy(nome,"Zeca");
		}
		else if(nivel==2){
			SFixo=1000.00;
			Comissao=0.08;
			strcpy(nome,"Pedro");
		}
		else if(nivel==3){
			SFixo=1200.00;
			Comissao=0.10;
			strcpy(nome,"Nino");	
		}
		else if(nivel==4){
			SFixo=1500.00;
			Comissao=0.15;
			strcpy(nome,"Biba");	
		}
		else{
		printf("dados inv�lido");	
		//return 0;// sa� do programa
		}
		
		system("cls");
		
		if(nivel >=1 && nivel <=4 ){
		printf("***** PROGRAMA CACHA�A FROM HELL INC.*****\n\n");
	    printf("Identifica��o: %d\n\n",nivel);
		printf("Funcion�rio: %s\n\n",nome);
		printf("Sal�rio Base:%.2f\n\n",SFixo);
		printf("Comiss�o: %.0f%%\n\n",Comissao*100);
		
	
		printf("Total de Vendas: R$");
		scanf("%f",&TotalVendas);
		SFinal = SFixo+(TotalVendas*Comissao);
		
		printf("\n\nSal�rio Final: R$%.2f",SFinal);	
		
		}
	printf("\n\ndesjesa efetuar nova consulta?: S/N\n");
	scanf("%s",&resp);
	printf("\n\n");
	}while(resp == 's');
	
	system("pause");
	
}
