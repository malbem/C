

#include <stdio.h>
#include <stdlib.h>

main(){
	
	
	char sexo;
	
	printf("Digite o sexo: M - Masculino, F - Feminino ");
	scanf("%c", &sexo);
	
	if ((sexo == 'm') || (sexo == 'M')){
		printf("Sexo Masculino");
	}
	
	else if ((sexo == 'f') || (sexo == 'F')){
		printf("Sexo Feminino");
	}
	else{
		printf("Sexo Invalido");
	}
	
system("pause>NULL");
}
