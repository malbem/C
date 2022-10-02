
#include <stdio.h>
#include <stdlib.h>

main(){
	
	int idade;
	float peso;
	
	printf("Digite a sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	
	if (idade < 20){
		printf("Voce e JOVEM \n \n");
		if (peso < 60){
		printf("Voce esta ABAIXO DO PESO \n \n");
	}
	
	else if ((peso >= 60) && (peso <= 90)){
		printf("Voce esta PESO NORMAL \n \n");
	}
	
	else
	{
		printf("Voce esta ACIMA DO PESO \n \n");
	}
	
	}
	
	else if ((idade >= 20) && (idade <= 50)){
		printf("Voce e ADULTO \n \n");
		if (peso < 60){
		printf("Voce esta ABAIXO DO PESO \n \n");
	}
	
	else if ((peso >= 60) && (peso <= 90)){
		printf("Voce esta PESO NORMAL \n \n");
	}
	
	else
	{
		printf("Voce esta ACIMA DO PESO \n \n");
	}
	}
	
	else
	{
		printf("Voce e IDOSO \n \n");
		if (peso < 60){
		printf("Voce esta ABAIXO DO PESO \n \n");
	}
	
	else if ((peso >= 60) && (peso <= 90)){
		printf("Voce esta PESO NORMAL \n \n");
	}
	
	else
	{
		printf("Voce esta ACIMA DO PESO \n \n");
	}
	}


	

	system("pause>NULL");
}