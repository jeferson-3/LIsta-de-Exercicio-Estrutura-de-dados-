
#include<stdlib.h> 
#include<stdio.h>
#include<string.h> 

void cabecalho(){
	printf("\t\tEstrutura de dados\n");
	printf("\t\taluno: jeferson guimaraes batalha");
	printf("\n");	
}
int main(){
	
	cabecalho();
	printf("\n");
	
    int produto, opcao;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0;
	float valor1 = 180, valor2 = 65 , valor3=50, valor4=20, valor5=45, valor6=150, valor7=70, vlf, vlf1, vlf2, vlf3, vlf4, vlf5, vlf6, vlf7;
    float forma_pag = 0, troco;
	do{	
	
	    printf("\t\t\tPet Shop\n");
		printf("\n\t1 - Racao para Caes,Nutrilus 20 Kg: (R$180,00)");
    	printf("\n\t2 - Comedouro Duplo (R$65,00)");
    	printf("\n\t3 - Conjunto Peitoral (R$50,00)");
    	printf("\n\t4 - Brinquedo Osso de plastico  (R$20,00)");
    	printf("\n\t5 - Shampoo Anti-Pulgas (R$45,00)");
    	printf("\n\t6 - Caixa Transporte para Caes: (R$150,00)");
    	printf("\n\t7 - Tapete higienico para Caes: (R$70,00)\n");
    	
		printf("\n\t\t\tQual produto deseja?:\n");
		 scanf("%d", &produto);
		switch(produto)
			{
			case 1:
			vlf1+=valor1;
			printf("Deseja continuar escolhendo produtos? (1 - Sim, 0 - Nao)");
			 scanf("%d", &opcao);
			c1++;
			break;
			case 2:
			vlf2+=valor2;
			printf("Deseja continuar escolhendo produtos? (1 - Sim, 0 - Nao)");
			 scanf("%d", &opcao);
			c2++;
			break;
			case 3:
			vlf3+=valor3;
			printf("Deseja continuar escolhendo produtos? (1 - Sim, 0 - Nao)");
			 scanf("%d", &opcao);
			c3++;
			break;
			case 4:
			vlf4+=valor4;
			printf("Deseja continuar escolhendo produtos? (1 - Sim, 0 - Nao)");
			 scanf("%d", &opcao);
			c4++;
			break;		
			case 5:
			vlf5+=valor5;
			printf("Deseja continuar escolhendo produtos? (1 - Sim, 0 - Nao)");
			 scanf("%d", &opcao);
			c5++;
			break;
			case 6:
			vlf6+=valor6;
			printf("Deseja continuar escolhendo produtos? (1 - Sim, 0 - Nao)");
			 scanf("%d", &opcao);
			c6++;
			break;
			case 7:
			vlf7+=valor7;
			printf("Deseja continuar escolhendo produtos? (1 - Sim, 0 - Nao)");
			 scanf("%d", &opcao);
			c7++;
			break;
			default:
			printf("Opçao invalida. Digite 1 para voltar.\n");
			scanf("%d", &opcao);
			break;
			 }
	}while(opcao==1);
		
		vlf=vlf1+vlf2+vlf3+vlf4+vlf5+vlf6,vlf7;
		printf("\nProdutos escolhidos:");
		if(vlf1 > 1){
		printf("\nRacao para Caes,Nutrilus 20 Kg: (R$180,00)");
		printf("\nQuantidade: %d", c1);
		}
		if(vlf2 > 1){
		printf("\nComedouro Duplo (R$65,00)");
		printf("\nQuantidade: %d", c2);		
		}
		if(vlf3 > 1){
		printf("\nConjunto Peitoral (R$50,00)");
		printf("\nQuantidade: %d", c3);	
		}
		if(vlf4 > 1){
		printf("\nBrinquedo Osso de plastico  (R$20,00)");
		printf("\nQuantidade: %d", c4);	
		}
		if(vlf5 > 1){
		printf("\nShampoo Anti-Pulgas (R$45,00)");
		printf("\nQuantidade: %d", c5);	
		}
		if(vlf6 > 1){
		printf("\nCaixa Transporte para Caes: (R$150,00)");
		printf("\nQuantidade: %d", c6);	
		}
		if(vlf7 > 1){
		printf("\nTapete higienico para Caes: (R$70,00)");
		printf("\nQuantidade: %d", c7);	
		}
		printf("\n\nValor final da compra: R$%.2f", vlf);	
		printf("\n\nQual o valor em dinheiro que voce ira pagar?: ");
		 scanf("%f", &forma_pag);
		if(forma_pag<vlf)
		printf("\nValor insuficiente para a compra! tente novamente...");
		else{
		troco = forma_pag - vlf;
		printf("\nPagamento realizado! \n\t\t\tTroco: R$%.2f\n\n", troco);
		}
	
}