/* 
Comando "FOR"
excecuta um bloco de comando por uma determinada quantidade de vezes
EX: FOR(inicio; condi��o; incremento){
	comandos X
	}

inicio: n�mero no qual se inicia a contagem.
condi��o: o que limita o n�mero de vezes que o bloco ir� se repetir.
incremento: o passo ou frquencia com a qual a contagem ser� avan�ada ou retrocedida.


enunciado: desenvolva um programa ondeo o usu�rio informe um valor inteiro, apresente a taboada do n�mero informado




*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<conio.h>

int main(){
	
	int m, n, i, j, p, aux;
		
	setlocale(LC_ALL,"");
	printf("** PROGRAMA TABUADA 2 ***\n\n");
	
	printf("informe o valor inicial:");
	scanf("%d",&m);
	
	printf("\n\ninforme o valor final:");
	scanf("%d",&n);
	
	if(m > n){
		aux= m;
		m=n;
		n=aux;
		printf("n�o banque o esperto\n\n");
	}
	for(i=m;i<=n;i++){
		
		for(j=0;j<=10;j++){
		p=i*j;
		printf("%d\tX\t%d\t=\t%d\n",i,j,p);	
		}
		getch();
		system("cls");
	}
	
	
	
	
	system("pause");
	printf("\n\n");
		
}




