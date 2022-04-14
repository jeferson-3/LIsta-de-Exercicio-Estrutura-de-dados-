#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void cabecalho(){
	printf("\tEstrutura de dados\n");
	printf("\taluno: jeferson guimaraes batalha");
	printf("\n");
}

int main(){
	
	system("cls");
	cabecalho();
	printf("\n");
	
	char estado[3];
	printf("Informe a sigla do Estado:");
	
	scanf("%s", &estado);
	
	if(!strcmp(estado,"RJ") || !strcmp(estado,"rj"))
	{
		printf("\nCarioca\n");
	}
	else if(!strcmp(estado,"AM") || !strcmp(estado,"am"))
	{
		printf("\nAmazonense\n");
	}
	else if(!strcmp(estado,"MG") || !strcmp(estado,"mg"))
	{
		printf("\nMineiro\n");
	}
	else if(!strcmp(estado,"SP") || !strcmp(estado,"sp"))
	{
		printf("\nPaulista\n");
	}
	else if(!strcmp(estado,"CS") || !strcmp(estado,"sc"))
	{
		printf("\nCatarinense\n");
	}
	else if(!strcmp(estado,"PR") || !strcmp(estado,"pr"))
	{
		printf("\nPernanbucano\n");
	}
	else if(!strcmp(estado,"MA") || !strcmp(estado,"ma"))
	{
		printf("\nMaranhense\n");
	}
	else if(!strcmp(estado,"PR") || !strcmp(estado,"pr"))
	{
		printf("\nParaibano\n");
	}
	else if(!strcmp(estado,"RO") || !strcmp(estado,"ro"))
	{
		printf("\nRondoniano\n");
	}
	else if(!strcmp(estado,"TO") || !strcmp(estado,"to"))
	{
		printf("\nTocantinense\n");
	}
	else if(!strcmp(estado,"GO") || !strcmp(estado,"go"))
	{
		printf("\nGoiano\n");
	}
	else
	{
		 printf("\nOutros estado Brasileiro\n");
    }

	return 0;
}