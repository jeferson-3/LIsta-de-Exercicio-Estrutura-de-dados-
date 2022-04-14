#include<stdio.h>
#include<stdlib.h>

void cabecalho(){
	printf("\tEstrutura de dados\n");
	printf("\taluno: jeferson guimaraes batalha");
	printf("\n");
}


int main(){
	system("cls");
	cabecalho();
	printf("\n");
	
	int i,soma=0;
	
	while(i<=100)
	{
		if(i%3==0 && i>0)
		printf("%d,",i);
		i++;
	}
}
