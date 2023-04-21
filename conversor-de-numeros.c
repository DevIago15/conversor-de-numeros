#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

#define MAX 50

typedef struct Conversor {
	int num;
}Conversor;

// --> Decimal p/ Binário <-- \\

void decimalBin(Conversor c){
	int num;
	
	printf("\nEscreva o numero decimal que deseja converter: ");
	scanf("%d", &num);
	
	int vet_bin[MAX];
	int i = 0, j;
	int aux_num = num;

	while(num > 0)
	{
		vet_bin[i] = num % 2;
		i++;
		num = num / 2;
	}

	printf("O Número %d em Binário: ", aux_num);

	for(j = i - 1; j >= 0; j--)
		printf("%d", vet_bin[j]);
	printf("\n\n");
}

// -->  Binário p/ Decimal <-- \\

void binDecimal(Conversor c){
	int bin, dec = 0, i;
	
	printf("\nEscreva o numero binario que deseja converter: ");
	scanf("%d", &bin);
	printf("O Binario %d em Decimal: ", bin);
	
	for(i = 0; bin > 0; i++){
		dec = dec + pow(2, i) * (bin % 10);
		bin = bin / 10;
	}

	printf("%d", dec);
	printf("\n\n");
}

// -->  Binário p/ Hexadecimal <-- \\

void hexaBin(Conversor c){
	char hexNum[100];
	int count = 0;
	
	printf("\nEscreva o numero hexadecimal que deseja converter: ");
	scanf("%s", &hexNum);
	printf("O Hexadecimal %s em Binario: ", hexNum);
	
	while(hexNum[count]){
		switch(hexNum[count]){
			case '0' : printf("0000");
				break;
			case '1' : printf("0001");
				break;
			case '2' : printf("0010");
				break;
			case '3' : printf("0011");
				break;
			case '4' : printf("0100");
				break;
			case '5' : printf("0101");
				break;
			case '6' : printf("0110");
				break;
			case '7' : printf("0111");
				break;
			case '8' : printf("1000");
				break;
			case '9' : printf("1001");
				break;
			case 'A' : printf("1010");
				break;
			case 'B' : printf("1011");
				break;
			case 'C' : printf("1100");
				break;
			case 'D' : printf("1101");
				break;
			case 'E' : printf("1110");
				break;
			case 'F' : printf("1111");
				break;
			case 'a' : printf("1010");
				break;
			case 'b' : printf("1011");
				break;
			case 'c' : printf("1100");
				break;
			case 'd' : printf("1101");
				break;
			case 'e' : printf("1110");
				break;
			case 'f' : printf("1111");
				break;
			default : printf("\Entrada Invalida, Tente Novamente %c",hexNum[count]);
		}
		count++;
		}
		printf("\n\n");	
	}

	
void binHex(Conversor C){
	char hexNum[100];
	int count = 0;
	
	printf("\nEscreva o numero binario que deseja converter: ");
	scanf("%s", &hexNum);
	printf("O Binario %s em Hexadecimal: ", hexNum);
	
	while(hexNum[count]){
		switch(hexNum[count]){
			case '0000' : printf("0");
				break;
			case '0001' : printf("1");
				break;
			case '0010' : printf("2");
				break;
			case '0011' : printf("3");
				break;
			case '0100' : printf("4");
				break;
			case '0101' : printf("5");
				break;
			case '0110' : printf("6");
				break;
			case '0111' : printf("7");
				break;
			case '1000' : printf("8");
				break;
			case '1001' : printf("9");
				break;
			case '1010' : printf("A");
				break;
			case '1011' : printf("B");
				break;
			case '1100' : printf("C");
				break;
			case '1101' : printf("D");
				break;
			case '1110' : printf("E");
				break;
			case '1111' : printf("F");
				break;
			case '1010' : printf("a");
				break;
			case '1011' : printf("b");
				break;
			case '1100' : printf("c");
				break;
			case '1101' : printf("d");
				break;
			case '1110' : printf("e");
				break;
			case '1111' : printf("f");
				break;
			default : printf("\Entrada Invalida, Tente Novamente %c",hexNum[count]);
		}
		count++;
		}
		printf("\n\n");	
	}
	

main(){
	struct Conversor c;
	setlocale(LC_ALL, "Portuguese");
	int op;
	
	printf("Seja Bem Vindo ao Conversor de Números!\n");
	printf("Escolha uma Opção: \n\n");
	do{
		printf("1 - Decimal p/ Binário\n");
		printf("2 - Binário p/ Decimal\n");
		printf("3 - Hexadecimal p/ Binário\n");
		printf("4 - Binário p/ Hexadecimal\n");
		printf("5 - Sair do Programa\n");
		printf("Sua Opçãoo: ");
		scanf("%d", &op);
		
		switch(op){
			case 1: 
				decimalBin(c);
				break;
			case 2:
				binDecimal(c);
				break;
			case 3:
				hexaBin(c);
				break;
			case 4:
				binHex(c);
				break;
			case 5:
				printf("Saindo do Programa...");
				break;
			
		}
	} while (op != 5);
	return 0;
}