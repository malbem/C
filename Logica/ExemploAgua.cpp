

#include <stdio.h>
#include <stdlib.h>

main(){
	
	//variaveis
	
	int garrafa;
	int total;
	
	//ENTRADA DE DADOS:
	printf("Digite a quantidade de garrafinhas");
	scanf("%i", &garrafa);
	
	//PROCESSAMENTO
	
	total = garrafa * 300;
	
	//SAIDA
	
	printf("Voce ingeriu: %i mls", total);
	
	system("pause>NULL");
	
} //FIM PROGRAMA