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

int main(){
	
	int n, i, p;
		
	printf("** PROGRAMA TABUADA ***\n\n");
	
	printf("informe um valor:");
	scanf("%d",&n);
	
	for(i=0;i<11;i++){
		p= n*i;
		printf("%d\tX\t%d\t=\t%d\n",n,i,p);
	}
	
	
	
	
	system("pause");
	printf("\n\n");
		
}




