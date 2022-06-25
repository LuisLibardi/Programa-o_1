/*Algoritimo

variaveis

- int n, m, vez

vez = 0

inicio:

- ler o valor de n e m
Escrever o "total N" na tela
Enquanto N > 0:

se vez == 0
Escreve: "Paula - "
   vez == 1
Senao
Escreve: "Carlos -"
   vez == 0

(N = n - m)

se n < 0:
imprime 0

Senao
imprime N

Fim: enquanto

se vez == 0:
imprime carlos ganhou

Senao
imprime paula ganhou

*/
#include <stdio.h>

int main(){

	int n, m, vez=0;


	printf(" Qual o valor de bolinhas recebido:");
	scanf("%d", &n);

	printf("Me informe o valor de bolinhas que foi comido:");
	scanf("%d", &m);

	while (n > 0){
		if(vez == 0){
			printf("Paula  -  ");
			vez = 1;
		}else{
			printf("Carlos -  ");
			vez = 0;
		}

		n = n - m;

		if(n < 0){
			printf("0\n");

		}else{
			printf("%d\n", n);
		}
	}
	if(vez == 0)
		printf("Carlos ganhou!\n");

	else
		printf("Paula ganhou!\n");
	
	return  0 ;

}

