#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


void cabecalho(){
	printf("\n\tEstrutura de dados\n");
	printf("\taluno: jeferson guimaraes batalha");
	printf("\n");
}
int main(){
	
	
	cabecalho();
	printf("\n");
	
	float peso,altura, imc;
	
	printf("Informe um peso em kgs: ");
	scanf("%f", &peso);
	
	printf("\nInforme a altura em metros: ");
	scanf("%f", &altura);
	
	
	imc = peso / (altura * altura);
	
	
	printf("\n\tIMC = peso / (altura * altura)\n");
	printf("\tIMC calculando Situacao...\n");
	printf("\t----------------------------\n");
	printf("\tMenos de 18,5 Abaixo do peso \n");
	printf("\t18,5 <= IMC < 25 Peso Normal \n");
	printf("\t25 <= IMC = 30 Acima do peso \n");
	printf("\tAcima 30 Obeso\n");
	printf("\t----------------------------\n");
	printf("\nIMC = %.2f\n", imc);
	if(imc < 18.5)
	{
		printf("\nIMC: %.2f Abaixo do peso ",imc);
	}
	else if(imc >= 18.5 && imc < 25)
	{
		printf("\nIMC: %.2f Peso Normal ",imc);
	}
	else if(imc >= 25 && imc < 30)
	{
		printf("\nIMC: %.2f Acima do peso ",imc);
	}
	else
	{
		printf("IMC: %.2f obeso", imc);
	}
	
	printf("\n");
	
	return 0;
}