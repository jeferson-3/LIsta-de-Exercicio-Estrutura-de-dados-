#include<stdio.h>
#include<stdlib.h>
void cabecalho(){
	printf("\tEstrutura de dados\n");
	printf("\taluno: jeferson guimaraes batalha\n");
	printf("\n");
}

int main(){
	system("cls");
	cabecalho();
	printf("\n");
	
	int n=1,c1=0, c2=0, c3=0, c4=0;
	
	while(n >= 0)
	{
		printf("Digite um numero: \n");
		scanf("%d", &n);
	
	if(n >= 0 && n <= 25)
	{
		c1 = c1 + 1;
	}else if(n >= 26 && n <= 50)
	{
		c2 = c2 + 1;
	}else if(n >= 51 && n <= 75)
	{
		c3 = c3 + 1;
	}else if(n >= 76 && n <= 100)
	{
		c4 = c4 + 1;
	}
	
}
	printf("\nA quantidade de numeros entre [0,25] = %d\n", c1); 
	printf("\nA quantidade de numeros entre [26,50] = %d\n", c2);
	printf("\nA quantidade de numeros entre [51,75] = %d\n", c3);
	printf("\nA quantidade de numeros entre [76,100] = %d\n", c4);
}