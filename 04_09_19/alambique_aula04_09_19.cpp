#include<stdio.h>
#include<stdlib.h>
#include<locale.h>//aceita caracteres de acordo com o idioma do sistema
#include<string.h>//manipula texto

/* um alambique possuí em seu quadro de funcionários, pessoas especializadas em vendas que recebem seus salários calculados
por meio da comissão sobre o valor dos produtos vendidos além do salário fixo, tal comissão, varia também de acordo com
o nível do funcionário, como mostra a tabela abaixo:

NIVÉL    /   NOME    /  SALÁRIO   /   COMISSÃO 
-------------------------------------------------
1           ZECA      800,00             5%
2          PEDRO      1000,00            8%
3          NINO       1200,00           10%
4          BIBA       1500,00           15          


a empresa necessita de um programa que auxilie no calculo do salário final de seus funcionários de acordo
com suas vendas.*/



int main(){
	//declaração de variavéis
	float SFixo,Comissao,TotalVendas,SFinal;
	int nivel;
	char nome[6], resp; 
	
	setlocale(LC_ALL,"");
	
	do{
		system("cls");
		printf("***** PROGRAMA CACHAÇA FROM HELL INC.*****\n\n");
		//desenvolvimento
		printf("nível do funcionário:\n");
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
		printf("dados inválido");	
		//return 0;// saí do programa
		}
		
		system("cls");
		
		if(nivel >=1 && nivel <=4 ){
		printf("***** PROGRAMA CACHAÇA FROM HELL INC.*****\n\n");
	    printf("Identificação: %d\n\n",nivel);
		printf("Funcionário: %s\n\n",nome);
		printf("Salário Base:%.2f\n\n",SFixo);
		printf("Comissão: %.0f%%\n\n",Comissao*100);
		
	
		printf("Total de Vendas: R$");
		scanf("%f",&TotalVendas);
		SFinal = SFixo+(TotalVendas*Comissao);
		
		printf("\n\nSalário Final: R$%.2f",SFinal);	
		
		}
	printf("\n\ndesjesa efetuar nova consulta?: S/N\n");
	scanf("%s",&resp);
	printf("\n\n");
	}while(resp == 's');
	
	system("pause");
	
}
