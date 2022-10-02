

#include <stdio.h>
#include <stdlib.h>
main(){
	
	float premio1, premio2, premio3;
	float total1, total2, total3;
	
	printf("Digite o valor do premio 1: ");
	scanf("%f", &premio1);
	
	printf("Digite o valor do premio 2: ");
	scanf("%f", &premio2);
	
	printf("Digite o valor do premio 3: ");
	scanf("%f", &premio3);
	
	
	total1 = premio1 / 2;
	total2 = premio2 / 2;
	total3 = premio3 / 2;
	
	printf("A primeira dupla cada um recebe %f \n", total1);
	
	printf("A segunda dupla cada um recebe %f \n", total2);
	
	printf("A terceira dupla cada um recebe %f \n", total3);
 	
	system("pause>NULL");
}
