

#include <stdio.h>
#include <stdlib.h>

main(){
	
	int n;
	int fatorial;
	fatorial = 1;
	
	printf("Digite um numero para calcular o fatorial: ");
	scanf("%i", &n);
	
	for (int i = n; i >= 1; i--)
	{
		
		fatorial = fatorial * i;
		
		printf("O valor de i:  %i \n", i);
		printf("VALOR MULTIPLICACAO: %i \n", fatorial);
	}
	
	printf("\n FATORIAL %i \n ", fatorial);
	
	system("pause>NULL");
}