#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void cabecalho(){
	printf("\tEstrutura de dados\n");
	printf("\taluno: jeferson guimaraes batalha");
	printf("\n");
}

	float verif(float num1, float num2){
		if(num1 > num2)
		{
			return num1;
		}else
		return num2;
	}
	float calc_area(float largura, float compri){
		return largura*compri;
	}
		
	int main (){
		float largura,compri,area1,area2;
		
		system("cls");
	    cabecalho();
     	printf("\n");
     	
     	printf("Informe o comprimmento 1 do terreno(em METROS):");
     	scanf("%f", &compri);
     	printf("\nInforme a largura do 1 terreno(em METROS):");
     	scanf("%f", &largura);
     	
     	area1=calc_area(largura,compri);
     	
     	printf("\nInforme o comprimmento do 2 terreno(em METROS):");
     	scanf("%f", &compri);
     	printf("\nInforme a largura do 2 terreno(em METROS):");
     	scanf("%f", &largura);
     	
     	area2=calc_area(largura,compri);
     	
     	printf("\nA area do primeiro terreno e: %.2f\n", area1);
     	printf("\nA area do segundo terreno e: %.2f\n", area2);
     	
     	if(area1 == area2)
     	    printf("\nAs areas sao iguais");
     	else
     	   printf("\nO maior terreno e: %.2f", verif(area1, area2));
     	
     	  
		    getch();
     	
		
	}
	
