
#include <stdio.h>
#include <stdlib.h>

main(){
	
	float litros;
	
	printf("Digite a quantidade de litros: ");
	scanf("%f", &litros);
	
	if ((litros >= 20) && (litros <= 50)){
		printf("Voce acaba de ganhar uma ducha !");
	}
	else if (litros > 50){
		printf("Voce acaba de ganhar um urso !");
	}
	else{
		printf("Voce acaba de ganhar um chaveiro !");
	}
	
	system("pause>NULL");
}