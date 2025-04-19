#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        char estado1, estado2;
        char codigo1[2], codigo2[2];
        char nome1[50], nome2[50];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int pontosturisticos1, pontosturisticos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

        printf("Vamos começar cadastrando os dados da Carta 1...\n");
        
        printf("Digite o a letra do estado: ");
        scanf(" %c", &estado1);

        printf("Digite o código do estado: ");
        scanf(" %s", &codigo1);

        printf("Digite o nome da cidade: ");
        scanf(" %s", &nome1);

        printf("Digite a população: ");
        scanf(" %i", &populacao1);

        printf("Digite a área em km²: ");
        scanf(" %f", &area1);

        printf("Digite o PIB: ");
        scanf(" %f", &pib1);

        printf("Digite a quantidade de pontos turísticos: ");
        scanf(" %i", &pontosturisticos1);

        printf("\n \n");

        printf("Vamos começar cadastrando os dados da Carta 2...\n");
        
        printf("Digite o a letra do estado: ");
        scanf(" %c", &estado2);

        printf("Digite o código do estado: ");
        scanf(" %s", &codigo2);

        printf("Digite o nome da cidade: ");
        scanf(" %s", &nome2);

        printf("Digite a população: ");
        scanf(" %i", &populacao2);

        printf("Digite a área em km²: ");
        scanf(" %f", &area2);

        printf("Digite o PIB: ");
        scanf(" %f", &pib2);

        printf("Digite a quantidade de pontos turísticos: ");
        scanf(" %i", &pontosturisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n \n \n");
    printf("Vejamos as cartas cadastradas...\n \n");
    
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
    printf("%i\n", pontosturisticos1);

    printf("\n \n \n");

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
    printf("%i\n", pontosturisticos2);

    return 0;
}
