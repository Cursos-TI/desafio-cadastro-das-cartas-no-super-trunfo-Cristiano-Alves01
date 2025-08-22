#include <stdio.h>

int main() {
    // Carta 1
    char estado1[50] = "Pernambuco";           
    char codigo1[5] = "R01";            
    char nomeCidade1[50] = "Recife";      
    unsigned long int populacao1 = 1488000; 
    float area1 = 218.8;
    float pib1 = 54.97; // bilhões
    int pontosTuristicos1 = 35;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2[50] = "Bahia";
    char codigo2[5] = "B02";
    char nomeCidade2[50] = "Salvador";
    unsigned long int populacao2 = 2418000;
    float area2 = 693.8;
    float pib2 = 62.9; // bilhões
    int pontosTuristicos2 = 78;
    float densidade2, pibPerCapita2, superPoder2;

    // ===== Entrada Carta 1 =====
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // cálculos carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // ===== Entrada Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // cálculos carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // ===== Exibição das cartas =====
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ===== Comparação =====
    printf("\n=== Comparação de Cartas ===\n");

    // População
    if (populacao1 > populacao2)
        printf("População: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (populacao2 > populacao1)
        printf("População: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("População: Empate!\n");

    // Área
    if (area1 > area2)
        printf("Área: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (area2 > area1)
        printf("Área: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("Área: Empate!\n");

    // PIB
    if (pib1 > pib2)
        printf("PIB: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (pib2 > pib1)
        printf("PIB: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("PIB: Empate!\n");

    // Pontos Turísticos
    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turísticos: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (pontosTuristicos2 > pontosTuristicos1)
        printf("Pontos Turísticos: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("Pontos Turísticos: Empate!\n");

    // Densidade Populacional (menor vence)
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (densidade2 < densidade1)
        printf("Densidade Populacional: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("Densidade Populacional: Empate!\n");

    // PIB per Capita
    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (pibPerCapita2 > pibPerCapita1)
        printf("PIB per Capita: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("PIB per Capita: Empate!\n");

    // Super Poder
    if (superPoder1 > superPoder2)
        printf("Super Poder: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (superPoder2 > superPoder1)
        printf("Super Poder: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("Super Poder: Empate!\n");

    return 0;
}
