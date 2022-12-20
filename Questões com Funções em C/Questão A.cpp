#include <stdio.h>
#include <locale.h>

int soma(int n1, int n2) {
	return n1 + n2;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int number1;
	int number2;
	int result;
	
	printf("\nSoma de dois valores com Funções\n");
	
	printf("\nInsira o primeiro valor: ");
	scanf("%d", &number1);
	
	printf("\nInsira o segundo valor: ");
	scanf("%d", &number2);
	
	result = soma(number1, number2);
	
	printf("\nResultado da soma: %d", result);
	
	return 0;
}
