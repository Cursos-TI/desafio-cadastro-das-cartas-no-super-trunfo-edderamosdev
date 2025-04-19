#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        char estado1;
        char codigo1[3];
        char nome1[50];
        int populacao1;
        float area1;
        float pib1;
        int pontosturisticos1;

        char estado2;
        char codigo2[3];
        char nome2[50];
        int populacao2;
        float area2;
        float pib2;
        int pontosturisticos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

        printf("Vamos começar cadastrando os dados da Carta 1...");
        
        printf("Digite o a letra do estado: \n");
        scanf("%c\n", &estado1);

        printf("Digite o código do estado: \n");
        scanf("%c\n", &codigo1);

        printf("Digite o nome da cidade: \n");
        scanf("%s\n", &nome1);

        printf("Digite a população: \n");
        scanf("%i\n", &populacao1);

        printf("Digite a área em km²: \n");
        scanf("%f\n", &area1);

        printf("Digite o PIB: \n");
        scanf("%f\n", &pib1);

        printf("Digite a quantidade de pontos turísticos: \n");
        scanf("%i\n", pontosturisticos1);

        printf("Agora vamos cadastrar os dados da Carta 2...");
        
        printf("Digite o a letra do estado: \n");
        scanf("%c\n", &estado2);

        printf("Digite o código do estado: \n");
        scanf("%c\n", &codigo2);

        printf("Digite o nome da cidade: \n");
        scanf("%s\n", &nome2);

        printf("Digite a população: \n");
        scanf("%i\n", &populacao2);

        printf("Digite a área em km²: \n");
        scanf("%f\n", &area2);

        printf("Digite o PIB: \n");
        scanf("%f\n", &pib2);

        printf("Digite a quantidade de pontos turísticos: \n");
        scanf("%i\n", pontosturisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Vejamos as cartas cadastradas...\n");
    
    printf("Carta 1: \n");
    printf("Letra do Estado: ");
    printf("%c\n", estado1);
    printf("Código: ");
    printf("%c", "%c\n", estado1, codigo1);
    printf("Nome da Cidade: ");
    printf("%s\n", nome1);
    printf("População: ");
    printf("%i\n", populacao1);
    printf("Área: ");
    printf("%f\n", area1, "km²");
    printf("PIB: ");
    printf("%f\n", pib1, "bilhões de reais");
    printf("Número de ponstos turísticos: ");
    Printf("%i\n", pontosturisticos1);


    printf("Carta 2: \n");
    printf("Letra do Estado: ");
    printf("%c\n", estado2);
    printf("Código: ");
    printf("%c", "%c\n", estado2, codigo2);
    printf("Nome da Cidade: ");
    printf("%s\n", nome2);
    printf("População: ");
    printf("%i\n", populacao2);
    printf("Área: ");
    printf("%f\n", area2, "km²");
    printf("PIB: ");
    printf("%f\n", pib2, "bilhões de reais");
    printf("Número de pontos turísticos");
    Printf("%i\n", pontosturisticos2);

    return 0;
}
