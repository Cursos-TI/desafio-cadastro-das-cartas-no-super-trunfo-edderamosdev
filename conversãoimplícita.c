#include <stdio.h>
 
int main() {
    int a = 10;
    float b = 3.5;
    float resultado = a + b; /* Dessa forma a variável 'a' será convertida automaticamente
    porém o valor apresentado pode não será exato pois na conversão implicita
    pode-se perder dados. */
 
    printf("Resultado: %.2f\n", resultado); /*utilizando o  motificador no especificador
    de formato é possível exibir as casas decimais do resultado.*/
 
    return 0;
}