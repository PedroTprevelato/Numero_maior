#include <stdio.h>

	int main () {
		
		char nome[40];
		float salariofixo, numerodecarros, comissaofixa, valordasvendas;
		
		
		printf("\nEntre com o nome do vendendor:");
		fflush(stdin);
		gets(nome);
		
		printf("\nEntre com o salario fixo do vendendor:");
		scanf("%f", &salariofixo);
		
		printf("\nEntre com o numero de carros vendidos pelo vendendor:");
		scanf("%f", &numerodecarros);
		
		printf("\nEntre com o valor da comissao fixa por carro:");
		scanf("%f", &comissaofixa);
		
		printf("\nEntre com o valor das vendas totais do vendendor:");
		scanf("%f", &valordasvendas);
		
		comissaofixa = comissaofixa * numerodecarros;
		
		valordasvendas = valordasvendas / 100 * 5;

		salariofixo = comissaofixa + valordasvendas;
		
		printf("\nO novo salario do vendedor e:  %.4f", salariofixo);
		
		return 0;
	} 
	
	