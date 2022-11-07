#include <stdio.h>

	int main () {
		
		float eleitores, votosbrancos, nulos, validos;
		
		printf("Entre com o numero total de eleitores: ");
		scanf("%f", &eleitores);
		
		printf("Entre com o numero total de votos brancos: ");
		scanf("%f", &votosbrancos);
		
		printf("Entre com o numero total de votos nulos: ");
		scanf("%f", &nulos);
		
		printf("Entre com o numero total de votos validos: ");
		scanf("%f", &validos);
		
		votosbrancos = votosbrancos / eleitores; 
		votosbrancos = votosbrancos * 100;
		nulos = nulos / eleitores * 100;
		validos = validos / eleitores;
		validos = validos * 100;
		
		printf("\nA porcentagem respectivamente de votos brancos, nulos e validos e: %.3f, %.3f, %.3f", votosbrancos, nulos, validos);
		
		return 0;
		
	}