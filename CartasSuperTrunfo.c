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

    // Entrada de dados da carta 1
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf("%49s", estado1);

    printf("Código da Carta: ");
    scanf("%4s", codigo1);

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

    // cálculo carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // Entrada de dados da carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf("%49s", estado2);

    printf("Código da Carta: ");
    scanf("%4s", codigo2);

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

    // cálculo carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    int opcao;

    do {
        printf("\n=== Menu de comparação ===\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("0 - Sair\n");
        printf("Escolha o atributo para comparar: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // População
                printf("\nComparando População:\n");
                printf("%s: %lu\n", nomeCidade1, populacao1);
                printf("%s: %lu\n", nomeCidade2, populacao2);
                if (populacao1 > populacao2)
                    printf("Vencedor: Carta 1 (%s)!\n", nomeCidade1);
                else if (populacao2 > populacao1)
                    printf("Vencedor: Carta 2 (%s)!\n", nomeCidade2);
                else
                    printf("Empate!\n");
                break;

            case 2: // Área
                printf("\nComparando Área:\n");
                printf("%s: %.2f km²\n", nomeCidade1, area1);
                printf("%s: %.2f km²\n", nomeCidade2, area2);
                if (area1 > area2)
                    printf("Vencedor: Carta 1 (%s)!\n", nomeCidade1);
                else if (area2 > area1)
                    printf("Vencedor: Carta 2 (%s)!\n", nomeCidade2);
                else
                    printf("Empate!\n");
                break;

            case 3: // PIB
                printf("\nComparando PIB:\n");
                printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
                printf("%s: %.2f bilhões\n", nomeCidade2, pib2);
                if (pib1 > pib2)
                    printf("Vencedor: Carta 1 (%s)!\n", nomeCidade1);
                else if (pib2 > pib1)
                    printf("Vencedor: Carta 2 (%s)!\n", nomeCidade2);
                else
                    printf("Empate!\n");
                break;

            case 4: // Pontos Turísticos
                printf("\nComparando Número de Pontos Turísticos:\n");
                printf("%s: %d\n", nomeCidade1, pontosTuristicos1);
                printf("%s: %d\n", nomeCidade2, pontosTuristicos2);
                if (pontosTuristicos1 > pontosTuristicos2)
                    printf("Vencedor: Carta 1 (%s)!\n", nomeCidade1);
                else if (pontosTuristicos2 > pontosTuristicos1)
                    printf("Vencedor: Carta 2 (%s)!\n", nomeCidade2);
                else
                    printf("Empate!\n");
                break;

            case 5: // Densidade Demográfica (menor vence)
                printf("\nComparando Densidade Demográfica (menor vence):\n");
                printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
                printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);
                if (densidade1 < densidade2)
                    printf("Vencedor: Carta 1 (%s)!\n", nomeCidade1);
                else if (densidade2 < densidade1)
                    printf("Vencedor: Carta 2 (%s)!\n", nomeCidade2);
                else
                    printf("Empate!\n");
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opção inválida! Por favor, escolha uma opção válida.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
