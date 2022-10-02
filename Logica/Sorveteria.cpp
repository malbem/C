#include <stdio.h>
#include <stdlib.h>

main(){
	int shop;

	system("color A");

	printf("		Bem-vindo ao Shopping do Emilio");
	printf("\n 1 - Soverteria \n 2 - Palestaria \n \n ");
	printf("Qual loja deseja ir: ");
	scanf("%i", &shop);
	fflush(stdin);

	system("pause>NULL");
	system("cls");

	if(shop == 1){

		system("color B");

		int pagamento;
		char tipo;
		float quantidade, total;

		printf("\n	SOVERTERIA DO CLEITIN	");
		printf("\n Selecione o tipo de sorvete");
		printf(" \n M - Morango | F - Flocos | A - Ameixa \n");
		printf(" \n C - Chocolate | B - Banana | J - Jerso \n");

		printf("\n \n Digite o sorvete que deseja:");
		scanf("%c", &tipo);

		switch (tipo){

			case 'M':
			case 'm':{
				system("cls");
				printf("\n 		Sorvete de Morango - R$ 2,50 ");
				printf("\n 		Digite a quantidade:  ");
				scanf("%f", &quantidade);
				fflush(stdin);


				system("cls");

				total = quantidade*2.5;

				printf("\n \n	VALOR TOTAL R$ %.2f \n \n", total);
				system("pause>NULL");

				// NOTA FISCAL

				system("cls");

				printf("	Formas de pagamento \n");
				printf("1 - PIX | 2 - DEBITO | 3 - CREDITO");

				printf("\n \n Qual forma de pagamento deseja: ");
				scanf("%i", &pagamento);
				fflush(stdin);

				system("cls");

				if(pagamento == 1){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em PIX");

				}
				else if (pagamento == 2){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em DEBITO");

				}
				else if (pagamento == 3){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em CREDITO");

				}
				else{
				printf("	\n \n Forma de pagamento INVALIDO!!!");
				}

				break;
		}

			case 'F':
			case 'f':{
			system("cls");
			printf("\n 		Sorvete de Flocos - R$ 2,00 ");
			printf("\n 		Digite a quantidade:  ");
			scanf("%f", &quantidade);

			total = quantidade*2;

			system("cls");

			printf("\n \n	VALOR TOTAL R$ %.2f \n \n", total);
			system("pause>NULL");

			// NOTA FISCAL

			system("cls");

			printf("	Formas de pagamento \n");
			printf("1 - PIX | 2 - DEBITO | 3 - CREDITO");

			printf("\n \n Qual forma de pagamento deseja: ");
			scanf("%i", &pagamento);
			system("cls");

			if(pagamento == 1){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em PIX");

			}
			else if (pagamento == 2){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em DEBITO");

			}
			else if (pagamento == 3){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em CREDITO");

			}
			else{
				printf("	\n \n Forma de pagamento INVALIDO!!!");
			}


			break;
			}

			case 'A':
			case 'a':{
			system("cls");
			printf("\n 		Sorvete de Ameixa - R$ 1,50 ");
			printf("\n 		Digite a quantidade:  ");
			scanf("%f", &quantidade);
			fflush(stdin);

			total = quantidade*1.5;

			system("cls");


			printf("\n \n	VALOR TOTAL R$ %.2f \n \n", total);
			system("pause>NULL");

			// NOTA FISCAL

			system("cls");

			printf("	Formas de pagamento \n");
			printf("1 - PIX | 2 - DEBITO | 3 - CREDITO");

			printf("\n \n Qual forma de pagamento deseja: ");
			scanf("%i", &pagamento);
			fflush(stdin);

			system("cls");

			if(pagamento == 1){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em PIX");

			}

			else if (pagamento == 2){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em DEBITO");

			}
			else if (pagamento == 3){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em CREDITO");

			}
			else{
				printf("	\n \n Forma de pagamento INVALIDO!!!");
			}


			break;
			}

			case 'C':
			case 'c':{
			system("cls");
			printf("\n 		Sorvete de Chocolate - R$ 2,50 ");
			printf("\n 		Digite a quantidade:  ");
			scanf("%f", &quantidade);
			fflush(stdin);

			total = quantidade*2.5;

			system("cls");

			printf("\n \n	VALOR TOTAL R$ %.2f \n \n", total);
			system("pause>NULL");

			// NOTA FISCAL

			system("cls");

			printf("	Formas de pagamento \n");
			printf("1 - PIX | 2 - DEBITO | 3 - CREDITO");

			printf("\n \n Qual forma de pagamento deseja: ");
			scanf("%i", &pagamento);
			fflush(stdin);

			system("cls");

			if(pagamento == 1){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em PIX");

			}
			else if (pagamento == 2){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em DEBITO");

			}
			else if (pagamento == 3){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em CREDITO");

			}
			else{
				printf("	\n \n Forma de pagamento INVALIDO!!!");
			}


			break;
			}

			case 'B':
			case 'b':{
			system("cls");
			printf("\n 		Sorvete de Banana - R$ 1,30 ");
			printf("\n 		Digite a quantidade:  ");
			scanf("%f", &quantidade);
			fflush(stdin);

			total = quantidade*1.3;

			system("cls");

			printf("\n \n	VALOR TOTAL R$ %.2f \n \n", total);
			system("pause>NULL");

			// NOTA FISCAL

			system("cls");

			printf("	Formas de pagamento \n");
			printf("1 - PIX | 2 - DEBITO | 3 - CREDITO");

			printf("\n \n Qual forma de pagamento deseja: ");
			scanf("%i", &pagamento);
			fflush(stdin);

			system("cls");

			if(pagamento == 1){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em PIX");

			}
			else if (pagamento == 2){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em DEBITO");

			}
			else if (pagamento == 3){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em CREDITO");

			}
			else{
				printf("	\n \n Forma de pagamento INVALIDO!!!");
			}


			break;
		}

			case 'J':
			case 'j':{
			system("cls");
			printf("\n 		Sorvete de Jerso - R$ 0.01 ");
			printf("\n 		Digite a quantidade:  ");
			scanf("%f", &quantidade);
			fflush(stdin);

			total = quantidade*0.01;

			system("cls");

			printf("\n \n	VALOR TOTAL R$ %.2f \n \n", total);
			system("pause>NULL");

			// NOTA FISCAL

			system("cls");

			printf("	Formas de pagamento \n");
			printf("1 - PIX | 2 - DEBITO | 3 - CREDITO");

			printf("\n \n Qual forma de pagamento deseja: ");
			scanf("%i", &pagamento);
			fflush(stdin);

			system("cls");

			if(pagamento == 1){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em PIX");

			}
			else if (pagamento == 2){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em DEBITO");

			}
			else if (pagamento == 3){
				printf("	\n \n 	NOTA FISCAL \n");
				printf("Valor total");
				printf(" R$%.2f", total);
				printf("\n Forma de pagamento em CREDITO");

			}
			else{
				printf("	\n \n Forma de pagamento INVALIDO!!!");
			}


			break;
		}

		default:{
			system("cls");

			printf("\n \n 	SORVETE INVALIDO !!!!");
			break;
		}
		}

		system("pause>NULL");
		system("cls");
		}
	else if(shop == 2){

		printf("Em contrucao!");
		system("pause>NULL");
		system("cls");
		
		return main();
	}

}