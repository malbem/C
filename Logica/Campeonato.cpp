
#include <stdio.h>
#include <stdlib.h>

main(){
	
	int vitorias;
	int derrotas;
	int empates;
	
	int totalVitorias;
	int totalEmpates;
	int totalDerrotas;
	
	int totalGeral;
	
	printf("Digite a quantidade de vitorias: ");
	scanf("%i", &vitorias);
	
	printf("Digite a quantidade de empates: ");
	scanf("%i", &empates);
	
	printf("Digite a quantidade de derrotas: ");
	scanf("%i", &derrotas);
	
	
	totalVitorias = vitorias * 3;
	totalEmpates = empates * 1;
	totalDerrotas = derrotas * 0;
	
	totalGeral = totalVitorias + totalEmpates + totalDerrotas;
	
	printf("TOTAL PONTOS COM VITORIAS: %i \n" , totalVitorias);
	printf("TOTAL PONTOS COM EMPATES: %i \n ", totalEmpates);	
	printf("TOTAL PONTOS COM DERROTAS: %i \n", totalDerrotas);
	
	printf(" \n TOTAL PONTOS: %i", totalGeral);
		
	system("pause>NULL");
	
}

