#include<stdlib.h>
#include<stdio.h>


void cabecalho(){
	printf("\t\tEstrutura de dados\n");
	printf("\t\taluno: jeferson guimaraes batalha");
	printf("\n");
	
}
int main(){
	cabecalho();
	printf("\n");
	
	int n1 = 0, cont = 0, quant = 0;
	do{
	printf("Digite um numero: ");
	 scanf("%d", &n1);
	cont++;
	if(n1>5)
	quant++;
	}
	while(cont<10);
	printf("\nNumero maiores que 5: %d", quant);
	return 0;
}