/*Ao escalar uma parede a aranha escala 20 cm de manhã e a noite ela desce 11 cm, 
em quantos dias a aranha chega ao topo de 18 metros de altura.*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void cabecalho(){
	printf("\n\t\tEstrutura de dados\n");
	printf("\t\taluno: jeferson guimaraes batalha");
	printf("\n");	
}
float totaldia(float esc_manha, float esc_noite){
	float esc_dia;
	esc_dia = (esc_manha - esc_noite);
	return(esc_dia);
}
float diasf(float altura, float esc_dia){
	return (altura*100) / esc_dia;
}
int main(){
	
	cabecalho();
	printf("\n");
	
	float manha, noite, dias = 0, dia, altura, esc_diat;
	
	printf("\nDigite a altura do predio: ");
	 scanf("%f", &altura);
	printf("Digite quantos M a aranha escala de manha: ");
	 scanf("%f", &manha);
	printf("Digite quantos M a aranha desce de noite: ");
	 scanf("%f", &noite);
	esc_diat = totaldia(manha, noite);
	dias = diasf(altura, esc_diat);
	printf("\n\nA aranha ira subir o predio em %.0f dias.", dias);

}