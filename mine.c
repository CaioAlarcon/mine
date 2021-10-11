#include <stdio.h>

#define altura 11 
#define largura 13

typedef char minado[2][altura][largura];


void printmine(minado campo);
void joga();

int main(){
	minado campo;
	int i, j;
	for(i=0;i<altura;i++)
		for(j=0;j<largura;j++)
			campo[1][i][j] = '#';

	printmine(campo);
	

	return 0;
}



void printmine(minado campo){
	int i, j;
	printf("   ");
	for(j=0;j<largura;j++)
		printf("%c ", 'A' + j );
	printf("\n");
	
	for(i=0;i<altura;i++){
		printf("%2d ",i+1);
		for(j=0;j<largura;j++)
			printf("%c ",campo[1][i][j]);
		printf("\n");
	}	
}




