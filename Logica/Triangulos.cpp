
#include <stdio.h>
#include <stdlib.h>

main(){

	int a,b,c;
	
	printf("Digite o lado A: ");
	scanf("%i",&a);
	
	printf("Digite o lado B: ");
	scanf("%i",&b);
	
	printf("Digite o lado C: ");
	scanf("%i",&c);
	
	if ((a<(b+c)) && (b<(a+c)) && (c<(a+b))){
		printf("Os numeros formam um Triangulo: ");
		
		if ((a==b) && (b==c) && (a==c)){
			printf("EQUILATERO");
		}
		
		else {
			if ((a!=b) && (a!=c) && (b!=c)){
				printf("ESCALENO");
			}
			
			else {
				printf("ISOCELES");
			}
		}
	}
	
	else{
		printf("Esses numeros nao formam um triangulo! \n");
	}
	
	system("pause>NULL");
}



