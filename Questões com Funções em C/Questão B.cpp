#include <stdio.h>
#include <locale.h>

char* verdoufalso(int number) {
	if(number >= 0) return "Verdadeiro";
	
	return "Falso";
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n;
	printf("\nQuest�o B - N�mero positivo ou negativo com Fun��es\n");
	
	printf("\nInsira um valor: ");
	scanf("%d", &n);
	
	char* b = verdoufalso(n);
	
	printf("\nO valor � positivo? %s", b);
	
	return 0;
}
