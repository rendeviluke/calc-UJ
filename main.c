#include <stdio.h>
#include <stdlib.h>

int soma(float x, float y) {
	return x + y;

}

int subtrai(float x, float y) {
	return x - y;

}

int multiplica(float x, float y) {
	return x * y;

}

int divide(float x, float y) {
	return x / y;

}


int main() {
	char operador;
	float numero_um, numero_dois, resultado;

	printf("Escolha uma operacao: [+][-][*][/]\n");
	scanf("%c", &operador);

	printf("Digite um numero:\n");
	scanf("%f", &numero_um);
	
	printf("Digite outro numero:\n");
	scanf("%f", &numero_dois);


	switch (operador)
	{
	case '+':
		resultado = soma(numero_um, numero_dois);
		break;

	case '-':
		resultado = subtrai(numero_um, numero_dois);
		break;

	case '*':
		resultado = multiplica(numero_um, numero_dois);
		break;

	case '/':
		resultado = divide(numero_um, numero_dois);
		break;
	
	default:
		printf("Algo errado ocorreu, tente novamente.\n");
		break;
	}


	printf("O resultado foi: %.1f", resultado);
}
