/*Algoritimo

variaveis

- int a, b, c, d

inicio:

- ler a, b, c, d

- se ler A == b + c + d e b + c == d e b == c
deve escrever: Esta equilibrado!

- Senão:
deve escrever: Nao esta equilibrado!
 
*/
s
#include <stdio.h>

int main(){

int a, b, c, d;

printf("Me informe o peso da primeira bola [a]:");
scanf("%d", &a);

printf("Me informe o peso da primeira bola [b]:");
scanf("%d", &b);

printf("Me informe o peso da primeira bola [c]:");
scanf("%d", &c);

printf("Me informe o peso da primeira bola [d]:");
scanf("%d", &d);

if( a == b + c + d && b + c == d && b == c)
	printf("Esta equilibrado!\n");
	
else
	printf("Nao esta equilibrado!");

return  0 ;

}

