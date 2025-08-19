#include <stdio.h>


int main() {
    // Carta 1
    char estado1[50] = "Pernambuco";           
    char codigo1[5] = "R01";            
    char nomeCidade1[50] = "Recife";      
    int populacao1 = 1488;
    float area1 = 218.8;
    float pib1 = 54.97;
    int pontosTuristicos1= 35;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2[50] = "Bahia";
    char codigo2[5] = "B02" ;
    char nomeCidade2[50] = "Salvador";
    int populacao2 = 2418;
    float area2 = 693.8;
    float pib2 = 62.9;
    int pontosTuristicos2 = 78;
    float densidade2;
    float pibPerCapita2;

    // Entrada Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: ");
    scanf( "%s", estado1);

    printf("Código da Carta: ");
    scanf( "%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

   // calculo carta 1

   //Cálculo da dencidade polulacional e da pib per capta carta 2
   densidade1= populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;



    // Entrada Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %s", estado2);

    printf("Código da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("População : ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Cálculo da dencidade polulacional e da pib per capta carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;




    // Exibição Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
