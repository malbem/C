

#include <stdio.h>
#include <stdlib.h>

main(){
	
	char nome[10];
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	for (int i; i <= 500; i++){
		printf("%s", nome);
	}
	
	
	system("pause>NULL");
}