/* 
Comando "FOR"
excecuta um bloco de comando por uma determinada quantidade de vezes
EX: FOR(inicio; condição; incremento){
	comandos X
	}

inicio: número no qual se inicia a contagem.
condição: o que limita o número de vezes que o bloco irá se repetir.
incremento: o passo ou frquencia com a qual a contagem será avançada ou retrocedida.


enunciado: desenvolva um programa ondeo o usuário informe um valor inteiro, apresente a taboada do número informado




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




