#include <stdio.h>
#include <stdlib.h>

main()
{
	int dias;
	float valorDia;
	float salario;
	
	printf("Digite a quantidade de dias: ");
	scanf("%i", &dias);

	printf("Digite o valor a ser pago por dia: ");
	scanf("%f", &valorDia);	
	
	salario = dias * valorDia;
	
	printf("Salario a ser pago: %.2f\n", salario);
	                              
	system("pause>NULL");
}

