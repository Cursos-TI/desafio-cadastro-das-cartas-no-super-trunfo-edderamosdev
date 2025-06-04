#include <stdio.h>

int main(){

/*
Operador de incremento(++)
Pré-incremento (++a) Primeiro incrementa depois atribue
Pós incremento (a++) Primeiro atribue e depois incrementa
Operador de decremento(--)
Pré-decremento(--a)
Pós decremento(a--)
*/

int numero1 = 1;
//Incremento e decremento simples:
/*
printf("Antes do incremento: %d\n", numero1);
numero1++;
printf("Depois do incremento: %d\n", numero1);
numero1--;
printf("Depois do decremento: %d\n", numero1);
*/


//Pré e pós, incremento e decremento:
/*
Pré-incremento (++a) Primeiro incrementa depois atribue
Pós incremento (a++) Primeiro atribue e depois incrementa
Pré-decremento(--a) Primeiro decrementa depois atribue
Pós decremento(a--) Primeiro atribui depois decrementa
*/

int numero1 = 1, resultado;

resultado = numero1++; //Atribui o valor à variável resultado e depois incrementa. O operador
//++ está depois da variável por se tratar do 'pré-incremento
printf("Após Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);


printf("Antes do incremento: %d\n", numero1); //Apenas exibe o número original da variável
resultado = ++numero1; //Pré-incrementa e atribui o valor à variável resultado. O operador
//++ está antes da variável por se tratar do 'pré-incremento
printf("Após Pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

resultado = numero1--; //Atribui o valor à variável resultado e depois decrementa. O operador
//-- está depois da variável por se tratar do 'pós`decremento
printf("Após Prós-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);


printf("Antes do incremento: %d\n", numero1); //Apenas exibe o número original da variável
resultado = --numero1; //Pré-incrementa e atribui o valor à variável resultado. O operador
//-- está antes da variável por se tratar do 'pré'-decremento
printf("Após Pré-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
}