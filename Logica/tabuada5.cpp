
#include <stdio.h>
#include <stdlib.h>

main(){
	int numero;
	printf("Digite um numero: ");
	scanf("%i", &numero);
	printf("       \n TABUADA DO %i      \n \n", numero);
	
	for (int i = 1; i <= 10; i++){
		printf("%i X %i = %i \n \n", i ,numero, i*numero);
	}
	
	
	system("pause>NULL");
}

