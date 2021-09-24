#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main () {
	
	setlocale (LC_ALL, "");
	
	
		int numero1, numero2, resultado, continuar;
		char op;

	do {

		
		printf ("Digite um numero:\n");
		scanf ("%i", &numero1),
		
		printf ("\nDigite outro numero inteiro:\n");
		scanf ("%i", &numero2),
		
		fflush (stdin );
		 
		printf ("\nQual operacao deseja executar? +, -, /, * ou %:\n");
		scanf ("%c", &op);
		
		if (op == '+') {
			resultado = numero1 + numero2;
			printf ("\n\nO Resultado e: %i", resultado);
		} 
		else if (op == '-') {
		resultado = numero1 - numero2;
		printf ("\n%i", resultado);
		}
		else if (op == '/') {
		resultado = numero1 / numero2;
		printf ("\n%i", resultado);
		}
		else if (op == '*') {
		resultado = numero1 * numero2;
		printf ("\n%i", resultado);
		}
		else if (op == '%') {
		resultado = numero1 % numero2;
		printf ("\n%i", resultado);
		}
		else {
			printf ("\noperacao nao permitida");		
		}


		
		
		printf("\n\nDigite 1 para continuar\n");
		scanf ("%i", &continuar);	
		system("cls");	
		
	} while (continuar == 1 || continuar == 1);
} 
