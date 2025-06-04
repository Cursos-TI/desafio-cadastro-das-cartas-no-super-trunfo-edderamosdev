#include <stdio.h>

int main(){

/*
Simples(=)
Soma(+=)
Subtração(-=)
Multiplicação(*=)
Divisão(/=)
*/

int numero1 = 10, numero2, resultado;
int soma, subtracao, multiplicacao, divisao;

//Atribuição simples(o mesmo que iniciar a variável)
resultado = 10;
//Imprime o valor iniciado na variável
printf("O resultado é: %d\n", resultado);

//Atribuição soma(realiza a operação de soma com o valor iniciado na variável
//e salva o resultado na variável)
resultado += 20;
//Imprime o resultado da soma
printf("O resultado é: %d\n", resultado);

//Atribuição subtração(subtrai o valor da variável numero1 do valor resultante da operação anterior
//e salva o novo resultado na mesma variável que tem o seu valor modificado)
resultado -= numero1;
//Imprime o resultado da subtração
printf("O resultado é: %d\n", resultado);

//Atribuição multiplicação(multiplicado o resultado da operação anterior por 5
//e salva o novo resultado na mesma variável que tem o seu valor modificado)
resultado *= 5;
//Imprime o resultado da multiplicação
printf("O resultado é: %d\n", resultado);

//Atribuição divisão(divide o resultado da operação anterior por 2 e salva o novo resulvado
//na mesma variável que tem o seu valor modificado)
resultado /= 2;
//Imprime o resultado da divisão
printf("O resultado é: %d\n", resultado);
}