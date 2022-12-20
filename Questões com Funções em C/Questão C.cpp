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
	
	printf("\nQuestão C - Fatorial com Funções");
	
	printf("\nInsira o número: ");
	scanf("%d", &n);
	
	f = fatorial(n);
	
	printf("\nFatorial: %d", f);
	
	return 0;
}
