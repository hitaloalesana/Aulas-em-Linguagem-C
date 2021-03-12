#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>



/* em uma determinada cidade será realizada uma eleição onde estão concorrendo quatro
 candidatos reconhecidos pelo número de sua legenda

NÚMERO   CANDITATO
1       ortiz
2       heredia
3       albuquerque
4       uhlmann
0       nulo
x       branco

ao chegar no terminal, o eleitor deverá informar o número de seu candidato
 e de acordo com sua escolha o voto será computado ao 
respectivo candidato.
a eleição será encerrada a partir do momento em que for digitado um código negativo 
sendo exibido por tanto um relatório
contendo:
TOTAL DE ELEITORES PARTICIPANTES
NÚMERO DE VOTOS EM CADA CANDIDATO
UM GRÁFICO QUE REPRESENTA O PERCENTUAL DE VOTAÇÃO EM CADA CANDIDATO.*/




int main(){
	
	int numCand,totEleit = 0;
	int qtCand1 = 0, qtCand2 = 0, qtCand3 = 0, qtCand4 = 0, qtBran = 0, qtNulo = 0;
	
	float pCand1, pCand2, pCand3, pCand4, pBran, pNulo;
	
	char nome[20];
	
	int i;
	
	
	setlocale(LC_ALL,"");
	
	do{
	
		printf("****** PROGRAMA ELEIÇÃO ******");
	
		printf("\n\nInforme o número do Candidato \n\n");
		printf("Legenda\t\t\tCandidato:\n\n");
		printf("-------------------------------------\n");
		printf("1\t\t\tOrtiz\n");
		printf("2\t\t\tHeredia\n");	
		printf("3\t\t\tAlbuquerque\n");
		printf("4\t\t\tUhlmann\n");
		printf("0\t\t\tNulo\n");
		printf("(qualquer valor)\tBranco\n");
		
		printf("\n\nSeu Voto:");
		scanf("%i",&numCand);
		
		if (numCand == 0){
			qtNulo++;
			totEleit++;
			strcpy(nome,"**Nulo**\n\n");		
		
		}else if (numCand == 1){
			qtCand1++;
			totEleit++;
			strcpy(nome,"**Ortiz**\n\n");
			
		}else if (numCand == 2){
			qtCand2++;
			totEleit++;
			strcpy(nome,"**Heredia**\n\n");
		
		}else if (numCand == 3){
			qtCand3++;
			totEleit++;
			strcpy(nome,"**Albuquerque**\n\n");
		
		}else if (numCand == 4){
			qtCand4++;
			totEleit++;
			strcpy(nome,"**Uhlmann**\n\n");
		
		}else if(numCand < 0){
			break;	
		
		}else{
			qtBran++;
			totEleit++;
			strcpy(nome,"**Branco**\n\n");
		}
		
		printf("\n\n%s",nome);
		_sleep(800);		
		
		
		
		
			system("cls");
		}while(numCand >= 0);	
	
		pCand1 = ((float)qtCand1 / (float)totEleit)*100;
		pCand2 = ((float)qtCand2 / (float)totEleit)*100;
		pCand3 = ((float)qtCand3 / (float)totEleit)*100;
		pCand4 = ((float)qtCand4 / (float)totEleit)*100;
		pBran = ((float)qtBran / (float)totEleit)*100;
		pNulo = ((float)qtNulo / (float)totEleit)*100;
		
		
		//apredentação dos resultados
	   system("cls");
	   printf("resultados Finais\n\n");
	   
	   printf("Ortiz: %d Votos\n", qtCand1);
	   for (i=0; i<pCand1; i++){
	   		printf("|");
	   		_sleep(80);
	   }
	   printf("- %.1f%%\n\n",pCand1);
	   
	   printf("Heredia: %d Votos\n", qtCand2);
	   for (i=0; i<pCand2; i++){
	   		printf("|");
	   		_sleep(80);
		}
	   printf("- %.1f%%\n\n",pCand2);
	   
	   printf("Albuquerque: %d Votos\n", qtCand3);
	   for (i=0; i<pCand3; i++){
	   		printf("|");
	   		_sleep(80);
		}
		printf("- %.1f%%\n\n",pCand3);
		
	   printf("Uhlmann: %d Votos\n", qtCand4);
	   for (i=0; i<pCand4; i++){
	   		printf("|");
	   		_sleep(80);	
	   }
	   printf("- %.1f%%\n\n",pCand4);
	   
	   printf("Branco: %d Votos\n", qtBran);
	   for (i=0; i<pBran; i++){
	   		printf("|");
	   		_sleep(80);
		}
		printf("- %.1f%%\n\n",pBran);
		
	   printf("Nulo: %d Votos\n", qtNulo);
	   for (i=0; i<pNulo; i++){
	   		printf("|"); 
			_sleep(80);  
		}
		printf("- %.1f%%\n\n",pNulo);
	
	
	
	printf("\n\n");
	system("pause");
	
	
	
	
	
	
	}
