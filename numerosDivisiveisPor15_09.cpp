#include<stdio.h>
#include<stdlib.h>
void cabecalho(){
	printf("\tEstrutura de dados\n");
	printf("\taluno: jeferson guimaraes batalha");
	printf("\n");
}


int main(){
	
	
	int soma=0;
	for(int i=15; i<250;i++)
	{
		if(i%2!=0)
		{
			soma=soma=i;
			printf("\n:%d", soma);
		}	
	}
	system("cls");
	cabecalho();
	printf("\nSoma de todos os numero impares e multiplos de 3 entre 15 e 250:= %d", soma);
	
}