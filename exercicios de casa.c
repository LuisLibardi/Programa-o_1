//Como Calcular o Fatorial de Um Número

#include <stdio.h>

int main(){

	int fatorial, resposta = 1;

	printf("Me informe um numero inteiro:\n");
	scanf("%d", &fatorial);

	for( ; fatorial >= 1; -- fatorial){
		resposta *= fatorial;
	}

	printf("O valor final do numero é: %d\n", resposta);

	return 0;
}



// Calcular se um Número é Primo

#include <stdio.h>

int main(){

    int num, i, cont = 0;

        printf("Me informe o numero desejado:\n");
        scanf("%d", &num);

        for(i = 1; i <= num; i++);
            if(num % 1 == 0)
                cont = cont + 1;
            if(cont == 2)
                printf("O numero %d é primo", num);
            else
                printf("O numero %d não é primo", num);
    return 0;
}
