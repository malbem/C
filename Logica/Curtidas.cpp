
#include <stdio.h>
#include <stdlib.h>

main(){
	
	//VARIAVEIS
	
	int qtdeCurtidas;
	int qtdeFalta;
	
	printf("Digite a quantidade de curtidas: ");
	scanf("%i", &qtdeCurtidas);
	
	if (qtdeCurtidas >= 100){
	printf("Voce e top no Instagram");
	}
	
	else{
		qtdeFalta = 100 - qtdeCurtidas;
		printf("Faltam %i para voce ser top ", qtdeFalta);
	}
	
	system("pause>NULL");
}