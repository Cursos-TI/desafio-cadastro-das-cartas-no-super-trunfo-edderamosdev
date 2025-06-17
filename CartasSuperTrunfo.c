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
        float area1, area2, densidade1, densidade2;
        float pib1, pib2;
        int pontosturisticos1, pontosturisticos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

        printf("No nosso jogo de super trunfo iremos competir com atributos de cidades brasileiras,\n");
        printf("para isso precisamos primeiramente cadastrar as cartas...\n");

        printf("\n \n");

        printf("Vamos começar cadastrando os dados da Carta 1...\n");
        
        printf("\n");
        
        printf("Defina uma letra para representar o estado(de A à H):   ");
        scanf(" %c", &estado1); //Tipo de dados(%) 'c' pois está sendo solicitado apenas 1 caractere
                                //Armazenando(&) na variável 'estado1'

        printf("Defina um código de 2 caracteres para representar o estado:   ");
        scanf(" %2s", &codigo1); //Tipo de dados(%) 's' pois está sendo solicitado uma string com mais de um caractere
                                //Número '2' antes do 's' para delimitar a quantidade de caracteres da string
                                //Armazenando(&) na variável 'codigo1'

        printf("Digite o nome da cidade:   ");
        scanf(" %s", &nome1); //Tipo de dados(%) 's' pois está sendo solicitado uma string com mais de um caractere
                             //Armazenando(&) na variável 'nome1'

        printf("Digite a população: ");
        scanf(" %i", &populacao1); //Tipo de dados(%) 'i' pois está sendo solicitado um número inteiro
                                  //Armazenando(&) na variável 'populacao1'

        printf("Digite a área em km²: ");
        scanf(" %f", &area1); //Tipo de dados(%) 'f' pois está sendo solicitado um número com casas decimais
                              //Armazenando(&) na variável 'area1'

        printf("Digite o PIB: ");
        scanf(" %f", &pib1); //Tipo de dados(%) 'f' pois está sendo solicitado um número com casas decimais
                             //Armazenando(&) na variável 'pib1'

        printf("Digite a quantidade de pontos turísticos: ");
        scanf(" %i", &pontosturisticos1);//Tipo de dados(%) 'i' pois está sendo solicitado um número inteiro
                                         //Armazenando(&) na variável 'pontosturisticos1

        printf("\n \n");

        printf("Agora vamos cadastrar os dados da Carta 2...\n");

        printf("\n");

        printf("Defina uma letra para representar o estado(de A à H):   ");
        scanf(" %c", &estado2); //Tipo de dados(%) 'c' pois está sendo solicitado apenas 1 caractere
                                //Armazenando(&) na variável 'estado2'

        printf("Defina um código de 2 caracteres para representar o estado:   ");
        scanf(" %2s", &codigo2); //Tipo de dados(%) 's' pois está sendo solicitado uma string com mais de um caractere
                                //Número '2' antes do 's' para delimitar a quantidade de caracteres da string
                                //Armazenando(&) na variável 'codigo2'

        printf("Digite o nome da cidade:   ");
        scanf(" %s", &nome2); //Tipo de dados(%) 's' pois está sendo solicitado uma string com mais de um caractere
                             //Armazenando(&) na variável 'nome2'

        printf("Digite a população: ");
        scanf(" %i", &populacao2); //Tipo de dados(%) 'i' pois está sendo solicitado um número inteiro
                                  //Armazenando(&) na variável 'populacao2'

        printf("Digite a área em km²: ");
        scanf(" %f", &area2); //Tipo de dados(%) 'f' pois está sendo solicitado um número com casas decimais
                              //Armazenando(&) na variável 'area2'

        printf("Digite o PIB: ");
        scanf(" %f", &pib2); //Tipo de dados(%) 'f' pois está sendo solicitado um número com casas decimais
                             //Armazenando(&) na variável 'pib2'

        printf("Digite a quantidade de pontos turísticos: ");
        scanf(" %i", &pontosturisticos2);//Tipo de dados(%) 'i' pois está sendo solicitado um número inteiro
                                         //Armazenando(&) na variável 'pontosturisticos2

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n \n \n");
    printf("Vejamos as cartas cadastradas...\n \n");
    
    printf("Carta 1: \n");
    printf("Letra do Estado: ");
    printf(" %c\n", estado1);
    printf("Código: ");
    printf(" %c%2s\n", estado1, codigo1);
    printf("Nome da Cidade: ");
    printf("%s\n", nome1);
    printf("População: ");
    printf("%i\n", populacao1);
    printf("Área: ");
    printf("%f km²\n", area1);
    printf("PIB: ");
    printf("%f bilhões de reais\n", pib1);
    printf("Número de ponstos turísticos: ");
    printf("%i\n", pontosturisticos1);

    printf("\n \n \n");

    printf("Carta 2: \n");
    printf("Letra do Estado: ");
    printf(" %c\n", estado2);
    printf("Código: ");
    printf(" %c%2s\n", estado2, codigo2);
    printf("Nome da Cidade: ");
    printf("%s\n", nome2);
    printf("População: ");
    printf("%i\n", populacao2);
    printf("Área: ");
    printf("%f km²\n", area2);
    printf("PIB: ");
    printf("%f bilhões de reais\n", pib2);
    printf("Número de ponstos turísticos: ");
    printf("%i\n", pontosturisticos2);

    printf("\n \n");

    densidade1 = populacao1 / area1;
    printf("Densidade populacional da carta 1: %f\n", densidade1);
    printf("\n");
    densidade2 = populacao2 / area2;
    printf("Densidade populacional da carta 2: %f\n", densidade2);

    return 0;
}
