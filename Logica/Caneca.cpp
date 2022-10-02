

#include <stdio.h>
#include <stdlib.h>

main(){
	
	int caneca;
	
	printf("Informe a quantidade de canecas: ");
	scanf("%i", &caneca);
	
	if (caneca > 3){
		printf("Pegue um taxi");
	}
	
	if (caneca <= 3){
		printf("Pode dirigir");
	}
	/*else{
		printf("Pode dirigir");
	}
	*/
	
	system("pause>NULL");
}