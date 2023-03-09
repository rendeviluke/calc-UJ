#include <stdio.h>
#include <stdlib.h>

char operador;
float numero_um, numero_dois, resultado;

int calcula(float numero_um, float numero_dois, char operador) {
	switch (operador)
	{
	case '+':
		resultado = numero_um + numero_dois;
		break;

	case '-':
		resultado = numero_um - numero_dois;
		break;

	case '*':
		resultado = numero_um * numero_dois;
		break;

	case '/':
		resultado = numero_um / numero_dois;
		break;
	
	default:
		printf("Algo errado ocorreu. Voce digitou '%c' e isso nao e permitido, tente novamente.\n", operador);
		break;
	}
	return resultado;
}

int main() {

	printf("Escolha uma operacao: [+][-][*][/]\n");
	scanf("%c", &operador);

	printf("Digite um numero:\n");
	scanf("%f", &numero_um);
	
	printf("Digite outro numero:\n");
	scanf("%f", &numero_dois);

	calcula(numero_um, numero_dois, operador);
	printf("O resultado foi: %.1f\n", resultado);
}
