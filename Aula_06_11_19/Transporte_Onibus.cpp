#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

/**VARIAVEIS PUBLICAS**/
int onibA[42], onibB[42], onibC[42];
int i;
float total, valor, caixa=0;

void esvaziarOnibus(){
	
	
	for(i=0; i<42; i++){
		onibA[i] = 0;
		onibB[i] = 0;
		onibC[i] = 0;
	}
}

bool efetuarVenda(int tmpOnib[], int tmpPolt){
 	if(tmpOnib[tmpPolt - 1] == 1){
 		return false;
	 }else{
	 	if(tmpPolt <10){
	 		total += valor * 1.25;
	 	}else{
	 		total=valor;
		 }
	 		caixa += total;
	 		printf("total a pagar: R$ %.2f\n",total);
	 		tmpOnib[tmpPolt - 1] = 1;
	 		return true;
		 }
	 }


void mostrarOnibus(int tmpOnib[]){
	char status[10];
	
	for(i=0; i<42; i++){
		if(tmpOnib[i] == 0){
				strcpy(status,"Vazio");
			}else{
				strcpy(status,"Ocupado");
			}//fechando else
			
		if(i % 2 == 1){				
		
			printf("POLTRONA[%d] = %s\n", i+1, status);		
		}else{
			printf("POLTRONA[%d] = %s\t", i+1, status);
		}		
		
	}//fechando for
	
	getch();
	system("cls");
}//fechando mostrarOnibus

int montarMenu(){
	
	int menu; //opção escolhida
	
	printf("Entre com a opção desejada: \n\n");
	printf("1 - Realizar Venda\n");
	printf("2 - Visualizar Frotas\n");
	printf("3 - Relatório de Vendas\n");
	printf("4 - Sair\n\n");
	
	printf("Opção: ");
	scanf("%d", &menu);
	
	return menu;
}

int main(){
	

	int opcao,polt;
	char codOnibus;
	bool statusVenda;
	
	
	setlocale(LC_ALL,"");
	esvaziarOnibus();
	
	do{
	
		printf("***PROGRAMA AGÊNCIA DE VIAGENS**\n\n");
		opcao = montarMenu();
	
		switch(opcao){
			
			case 1:
				printf("entre com o destino: ");
				scanf("%s",&codOnibus);
				printf("entre com o número da Poltrona.");
				scanf("%d",&polt);
				
				if(codOnibus == 'a'){
					valor = 75;
					statusVenda = efetuarvenda(onibA,polt);
					
					
				}else if(codOnibus == 'b'){
					valor = 90;
					statusVenda = efetuarvenda(onibB,polt);
					
				}else if(codOnibus == 'c'){
					valor = 250;
					statusVenda = efetuarvenda(onibC,polt);
				}else{
					printf("\ndestino inválido!!!\n")
				}
				if(statusVenda == true){
					printf("venda efetuada!!");
				}else{
					prinf("venda não efetuada!!");
				}
				//venda
				break;
			case 2:
				system("cls");
				printf("\nEntre com o código do onibus: ");
				scanf("%s", &codOnibus);
				printf("\n\n");
				if(codOnibus == 'a'){
					printf("## ONIBUS A - DESTINO --> RIO DE JANEIRO ##\n\n");
					mostrarOnibus(onibA);
				}else if	(codOnibus == 'b'){
						printf("## ONIBUS B - DESTINO --> BELO HORIZONTE ##\n\n");
					mostrarOnibus(onibB);
				}else if	(codOnibus == 'c'){
					printf("## ONIBUS C - DESTINO --> ACRE ##\n\n");
					mostrarOnibus(onibC);
				}else{
					printf("Código Inválido.\n");
				}
				break;
			case 3:
				//relatorio
				break;
			case 4:
				break;
			default:
				printf("## Opção Inválida! ##");
				_sleep(1500);
				break;
		}		
	
		system("cls");
	
	}while(opcao != 4);

	
	
}

/*uma agencia de viagens possui três ônibus em sua frota que fazem 3 destinos diferentes, variando o valor das passagens:

A -> SP - RJ - R$75,00
B -> SP - BH - R$98,00
C -> SP - AC - R$250,00

cada ônibus é equipado com 42 poltronas sendo que as 10 primeiras são classificadas como setor LUXO e as demais, setor ECONOMICO.

*poltronas do setor LUXO custam 25% acima do preço convencional.

o usuário necessita de uma aplicação que permita fazer o gerenciamento das vendas das passagens,
identificando o destino de cada passageiro,
registrando valores em dinheiro em caixa e validando qualquer possibilidade que evite o conflito na venda as passagens, dessa forma
deverá ser desenvolvido um programa, que permita ao usuário trabalhar em suas funções:
- efetivar a venda de passagens
- mapeamento dos ônibus
- relatório de vendas e caixa

desenvolva o programa que melhor soluciona o problema descrito acima.

*/
