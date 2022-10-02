
#include <stdio.h>
#include <stdlib.h>

main(){
	float salario1;
	float salario2;
	
	printf("Digite o salario do primeiro funcionario: R$ ");
	scanf("%f", &salario1);
		
	printf("Digite o salario do segundo funcionario: R$ ");
	scanf("%f", &salario2);
	
	if (salario1 > salario2){
		printf("Funcionario 1 ganha mais");
	}
	else if (salario2 > salario1){
		printf("Funcionario 2 ganha mais");
	}
		else {
			printf("Salarios iguais");
		}
		
		system("pause>NULL");
}
