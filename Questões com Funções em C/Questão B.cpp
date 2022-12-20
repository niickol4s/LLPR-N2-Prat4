#include <stdio.h>
#include <locale.h>

char* verdoufalso(int number) {
	if(number >= 0) return "Verdadeiro";
	
	return "Falso";
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n;
	printf("\nQuestão B - Número positivo ou negativo com Funções\n");
	
	printf("\nInsira um valor: ");
	scanf("%d", &n);
	
	char* b = verdoufalso(n);
	
	printf("\nO valor é positivo? %s", b);
	
	return 0;
}
