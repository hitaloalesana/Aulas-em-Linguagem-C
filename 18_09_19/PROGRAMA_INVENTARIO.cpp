#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<conio.h>

// "while" executa um bloco de comando enquanto uma condição for veradeira
// "do-while" executa um comando e volta a executa-lo enquanto uma condição for verdadeira

/* "um super mercado necessita fazer um inventário de seus produtos em estoque, separando-os em várias categorias
e contabilizando a quantidade de itens em cada uma delas.
as categorias de produtos seguem de acordo com a tabela abaixo:

1     |limpeza    
2     |utensilios domésticos
3     |bebidas
4     |doces
5     |frios
6     |Salgadinhos
7     |grãos   

ao digitar a categoria do produto este deverá ser contabilizado do respectivo genêro e uma vez que o usuário digitar
a categoria "0", da-se o programa por encerrado.
ao fim deverá ser exibido um relatório com a quantidade de produtos de cada categoria e o total de produtos em estoque.
*/

int main(){
	int categoria;
	int qLimp=0, qDom=0, qBeb=0, qDoc=0, qFrio=0, qSalg=0, qGra=0;
	int total;
	
	char nomeCat[30];
	
	setlocale(LC_ALL,"");
	
	do{
	
	printf("\n\n***** PROGRAMA ESTOQUE DO MERCADINHO MINECRAFT *****");
	printf("\n\ninforme a categoria do produto:");
	printf("\n\nCategoria:1\t\tLimpeza\nCategoria:2\t\tUtensilíos Domésticos\nCategoria:3\t\tBebidas\nCategoria:4\t\tDoces");
	printf("\nCategoria:5\t\tFrios\nCategoria:6\t\tSalgadinhos\nCategoria:7\t\tGrãos\n\nDigite a Categoria:");
	scanf("%i",&categoria);
	
	switch(categoria){
		
		case 1:
			 
			qLimp++;
			strcpy(nomeCat,"Limpeza");
			printf("%s --- %d",nomeCat, qLimp);
			_sleep(950);
			break;
			
			
		case 2:
			qDom++;
			strcpy(nomeCat,"Utensilios Domésticos");
			printf("%s --- %d",nomeCat, qDom);
			_sleep(950);
			break;
		
		case 3:
			qBeb++;
			strcpy(nomeCat,"Bebidas");
			printf("%s --- %d",nomeCat, qBeb);
			_sleep(950);
			break;
		
		case 4:
			qDoc++;
			strcpy(nomeCat,"Doces");
			printf("%s --- %d",nomeCat, qDoc);
			_sleep(950);
			break;
		
		case 5:
			qFrio++;
			strcpy(nomeCat,"Frios");
			printf("%s --- %d",nomeCat, qFrio);
			_sleep(950);
			break;
		
		case 6:
			qSalg++;
			strcpy(nomeCat,"Salgadinhos");
			printf("%s --- %d",nomeCat, qSalg);
			_sleep(950);
			break;
		
		case 7:
			qGra++;
			strcpy(nomeCat,"Grãos");
			printf("%s --- %d",nomeCat, qGra);
			_sleep(950);
			break;
	    
	    case 0:
	    	printf("\nCATEGORIA INVÁLIDA");
	    	_sleep(950);
	    	break;
		default:
		
		break;
	
	}
	
	
	system("cls");
	}while(categoria != 0);
	
	total=(qLimp+qDom+qBeb+qDoc+qFrio+qSalg+qGra);
	system("cls");
	printf("\n\n***** PROGRAMA ESTOQUE DO MERCADINHO MINECRAFT *****\n");
	printf("\nCódigo\t\tItem\t\t\tQuantidade\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n1\t\tLimpeza\t\t\t%d",qLimp);
	printf("\n2\t\tUtensílios Dom.\t\t%d",qDom);
	printf("\n3\t\tBebidas\t\t\t%d",qBeb);
	printf("\n4\t\tDoces\t\t\t%d",qDoc);
	printf("\n5\t\tFrios\t\t\t%d",qFrio);
	printf("\n6\t\tSalgadinhos\t\t%d",qSalg);
	printf("\n7\t\tGrãos\t\t\t%d",qGra);
	printf("\n\nTotal de Itens:%d",total);
	
	
	printf("\n\n");
	system("pause");
} 


