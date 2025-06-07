#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; /*Dessa forma o tipo de dados é convertido forçadamente
    ou explicitamente, onde o novo tipo é inserido entre parenteses imediatamente antes
    da operação matemática, isso possibilita maior controle da conversão.*/
 
    printf("Quociente: %.2f\n", quociente); /*utilizando o  motificador no especificador
    de formato é possível exibir as casas decimais do resultado.*/
 
    return 0;
}