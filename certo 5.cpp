#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	printf ("Informe o segundo numero: ");
	scanf("%d,", &n2);
	
	if(n1 > n2){
		printf("O primeiro numero (%d) e maior que o segundo (%d)",n1 ,n2);
	}else if (n1 < n2){
		printf("O segundo numero (%d) e maior que o primeiro (%d)",n2 ,n1);
	}else{
		printf("Os numeros %d e %d sao iguais",n1 ,n2);
	}
	return 0;
}