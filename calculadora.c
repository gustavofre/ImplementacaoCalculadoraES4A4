#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int calcul2(int numero1){
		setlocale (LC_ALL, "");	
		system("cls");		
		int numero2, resultado, continuar;
		char op;		

	printf("O primeiro n�mero �: %i\n", numero1);

	printf ("\nDigite outro n�mero inteiro:\n");
		scanf ("%i", &numero2),
		
		fflush (stdin);
		 
		printf ("\nQual opera��o deseja executar? +, -, /, * ou %%:\n");
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
	
		else {
			printf ("\nopera��o n�o permitida");		
		}

		printf("\n\nDigite 1 para continuar com o mesmo n�mero ou 2 para resetar o c�lculo\n");
		scanf ("%i", &continuar);	
		system("cls");	
		
		if (continuar == 1){
			numero1 = resultado;
			calcul2(numero1);

		} else if (continuar == 2){
			system("calculadora.exe");
		}		
		return 0;
}

int main () {
	setlocale (LC_ALL, "");
	
int numero1, numero2, resultado, continuar;
		char op;

		printf ("Digite um n�mero:\n");
		scanf ("%i", &numero1),

		printf ("\nDigite outro n�mero inteiro:\n");
		scanf ("%i", &numero2),
		
		fflush (stdin );
		 
		printf ("\nQual opera��o deseja executar? +, -, /, * ou %%:\n");
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
	
		else {
			printf ("\nopera��o n�o permitida");		
		}
		printf("\n\nDigite 1 para continuar com o mesmo n�mero ou 2 para resetar o c�lculo\n");
		scanf ("%i", &continuar);	
		system("cls");	
		
		if (continuar == 1){
			numero1 = resultado;
			calcul2(numero1);

		} else if (continuar == 2){
			main();
		}		
} 
