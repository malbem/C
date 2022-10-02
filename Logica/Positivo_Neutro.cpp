

#include <stdio.h>
#include <stdlib.h>

main(){
	
	float numero;
	
	printf("Digite um n%cmero:", 163);
	scanf("%f", &numero);
	
	if (numero > 0){
		printf("Positivo");
	}
	
	else if (numero < 0){
		printf("Negativo");
	}
	
	else {
		printf("Neutro");
	}
	
	system("pause>NULL");
		
}
