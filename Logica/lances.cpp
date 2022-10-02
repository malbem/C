#include <stdio.h>
#include <stdlib.h>

main(){
	
	system("color A");
	
	int tipo;
	float quantidade;
	
	printf("\n	LANCHONETE JACI	");
	printf("\n Selecione o tipo de sanduiche");
	printf(" \n 1 - XTUDO;	2 - X-SALADA;	3 - X-BANCON ");
	
	printf("\n \n Digite o sanduiche que deseja:");
	scanf("%i", &tipo);
	
	switch (tipo){
		
		case 1:{
			system("cls");
			printf("\n 		SANDUICHE X-TUDO - R$ 20,00 ");
			printf("\n 		Digite a quantidade:  ");
			scanf("%f", &quantidade);
			
			system("cls");
			
			printf("\n \n	VALOR TOTAL R$ %.2f \n \n", quantidade*20);
			
			break;
		}
		
		case 2:{
			system("cls");
			printf("\n 		SANDUICHE X-SALADA - R$ 12,00 ");
			printf("\n 		Digite a quantidade:  ");
			scanf("%f", &quantidade);
			
			system("cls");
			
			printf("\n \n	VALOR TOTAL R$ %.2f \n \n", quantidade*12);
			
			break;
		}
		
		case 3:{
			system("cls");
			printf("\n 		SANDUICHE X-BEACON - R$ 15,00 ");
			printf("\n 		Digite a quantidade:  ");
			scanf("%f", &quantidade);
			
			system("cls");
			
			printf("\n \n	VALOR TOTAL R$ %.2f \n \n", quantidade*15);
			
			break;
		}
		
		default:{
			system("cls");
			
			printf("\n \n 	SANDUICHE INVALIDO !!!!");
			break;
		}
	}
		
	system("pause>NULL");
	system("cls");
	return main();
}