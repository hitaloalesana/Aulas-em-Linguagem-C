#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/*uma lanchonete possui em seu cardápio uma variedade de lanches que variam de preço de acordo com a
tabela abaixo:

cod             lanche               preço
1              pão na chapa           2,50
2              bauru                  3,50
3              hot-dog                5,00
4              x-burguer              6,50
5              x-tudo                 10,00

além dos lanches o cliente pode solicitar um acompanhamento, seguindo a lista:
cod             lanche               preço
1               fritas                 5,00
2               polenta                7,00
3               camarão                12,00

e por fim, a bebida:

cod           bebida              preço
1             água                 2,00
2             pingado              3,00
3             refrigerante         5,00

desenvolva um programa que permita ao cliente optar por cada um dos itens a cima e montar 
o seu combo, informando ao fim, o valor total da compra.                      


*/

int main(){
	int codLanche,codAcomp,codBeb;
	char resp,nomeLanche[20],nomeAcomp[20],nomeBeb[20];
	float total = 0;
	
	setlocale(LC_ALL,"");
	
	do{
		system("cls");
		printf("********PROGRAMA LANCHONETE********\n\n\n");
		printf("\n\nentre com o código do lanche:\n\n");
		printf("código\t\tlanche\t\tpreço");
		printf("\n1\t\tPão na chapa\t\t2,50");
		printf("\n2\t\tBauru PLUS\t\t3,50");
		printf("\n3\t\tDog-de casa\t\t5,00");
		printf("\n4\t\tX-Burgui\t\t6,50");
		printf("\n5\t\tX-cósmico\t\t10,00");
		printf("\ncódigo?:");
		scanf("%d",&codLanche);
		
		system("cls");
		printf("********PROGRAMA LANCHONETE********\n\n\n");
		printf("\n\nentre com o código do Acompanhamento:\n\n");
		printf("código\t\tlanche\t\tpreço");
		printf("\n1\t\tBatatas Fritas\t5,00");
		printf("\n2\t\tPolenta\t\t7,00");
		printf("\n3\t\tCamarão\t\t12,00");
		printf("\ncódigo?:");
		scanf("%d",&codAcomp);
		
		system("cls");
		printf("********PROGRAMA LANCHONETE********\n\n\n");
		printf("\n\nentre com o código da bebida:\n\n");
		printf("código\t\tlanche\t\tpreço");
		printf("\n1\t\tÁgua\t\t2,00");
		printf("\n2\t\tPingado\t\t3,00");
		printf("\n3\t\tRefrigerante\t\t5,00");
		printf("\ncódigo?:");
		scanf("%d",&codBeb);
		
		if(codLanche>=1){
			if(codLanche==1){
			strcpy(nomeLanche,"Pão na chapa");
			total+2.50;
			}else if (codLanche==2){
			strcpy(nomeLanche,"Bauru Plus");
			total=total+3.50;
			}else if(codLanche==3){
			strcpy(nomeLanche,"Dogão Caseiro");
			total=total+5.00;
			}else if(codLanche==4){
			strcpy(nomeLanche,"X-Burgui");
			total=total+6.50;
			}else if(codLanche==5){
			strcpy(nomeLanche,"X-cósmico");
			total=total+10.00;
			}
		}else{
			(codLanche==0);
			strcpy(nomeLanche,"NENHUM LANCHE");
		}
		
		if(codAcomp>=1){
			if(codAcomp==1){
			strcpy(nomeAcomp,"Batatas Fritas");
			total=total+5.00;
			}else if (codAcomp==2){
			strcpy(nomeAcomp,"Polenta");
			total=total+7.00;
			}else if(codAcomp==3){
			strcpy(nomeAcomp,"Camarão");
			total=total+12.00;
			}
		}else{
			(codAcomp==0);
			strcpy(nomeAcomp,"NENHUM LANCHE");
		}
		
		if(codBeb>=1){
			if(codBeb==1){
			strcpy(nomeBeb,"Água");
			total=total+2.00;
			}else if (codBeb==2){
			strcpy(nomeBeb,"Pingado");
			total=total+3.00;
			}else if(codBeb==3){
			strcpy(nomeBeb, "Refrigerante");
			total=total+5.00;
			}
		}else{
			(codBeb==0);
			strcpy(nomeBeb,"NENHUM LANCHE");
			}
			
			system("cls");
			printf("********PROGRAMA LANCHONETE********\n\n\n");
			printf("\n\n");
			printf("você escolheu %s, %s e %s\n",nomeLanche,nomeBeb,nomeAcomp);
			printf("seu total é:%.2f",total);
		printf("\n\nnova compra?:S/N");
		scanf("%s",&resp);
	
	}while(resp == 's');
		 
	
	
	
	
	
	printf("\n\n");
	system("pause");
	
}
