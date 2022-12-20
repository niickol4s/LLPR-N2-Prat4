#include <stdio.h>
#include <locale.h>

int fatorial(int number) {
	int fat = 1;
	for(int i = number; i >= 2; i--) {
		fat *= i; 
	}
	
	return fat;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n;
	int f;
	
	printf("\nQuest�o C - Fatorial com Fun��es");
	
	printf("\nInsira o n�mero: ");
	scanf("%d", &n);
	
	f = fatorial(n);
	
	printf("\nFatorial: %d", f);
	
	return 0;
}
