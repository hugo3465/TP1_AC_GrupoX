#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define false 0
#define true 1

#define VALOR_INVALIDO "Introduziu um valor invalido"
#define PAUSE "\n\nClique no enter para continuar."

void pause() {
	char ch;
	printf(PAUSE);
	while ( (ch = getchar() ) != '\n') {}
}

void limparBuffer() {
	char ch;
	while ( ( ch = getchar() ) != '\n' && ch != EOF) { }
}

int obterInt(int minVal, int maxVal, char *msg) {
	int valor;
	
	printf(msg);
	
	while (scanf("%d", &valor) != 1 || valor < minVal || valor > maxVal) {
		puts(VALOR_INVALIDO);
		limparBuffer();
		printf(msg);
	}
	limparBuffer();
	
	return valor;
}

float obterFloat(float minVal, float maxVal, char *msg) {
	float valor;
	
	printf(msg);
	
	while (scanf("%f", &valor) != 1 || valor < minVal || valor > maxVal) {
		puts(VALOR_INVALIDO);
		limparBuffer();
		printf(msg);
	}
	limparBuffer();
	
	return valor;
}

double obterDouble(double minVal, double maxVal, char *msg) {
	double valor;
	
	printf(msg);
	
	while (scanf("%lf", &valor) != 1 || valor < minVal || valor > maxVal) {
		puts(VALOR_INVALIDO);
		limparBuffer();
		printf(msg);
	}
	limparBuffer();
	
	return valor;
}

char obterChar(char *msg) {
	char ch;
	
	printf(msg);
	ch = getchar();
	limparBuffer();
	
	return ch;
}

void obterString(char *string, int tamanho, char *msg) {
	printf(msg);
	
	if (fgets(string, tamanho, stdin) != NULL ){
		unsigned int len = strlen(string) - 1;
		if (string[len] == '\n') {
			string[len] = '\0';
		} else {
			limparBuffer();
		}
	}
}
