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

    // Carta 2
    char estado2[50] = "Bahia";
    char codigo2[5] = "B02";
    char nomeCidade2[50] = "Salvador";
    unsigned long int populacao2 = 2418000;
    float area2 = 693.8;
    float pib2 = 62.9;
    int pontosTuristicos2 = 78;

    // Entrada dos dados da carta 1
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

    // Entrada dos dados da carta 2
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

    // Cálculos extras
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Menu de escolha de dois atributos diferentes
    int atributo1 = -1, atributo2 = -1;

    do {
        printf("\nEscolha o primeiro atributo:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica (menor vence)\n");
        printf("Opção: ");
        scanf("%d", &atributo1);
    } while (atributo1 < 1 || atributo1 > 5);

    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        for (int i = 1; i <= 5; i++) {
            if (i != atributo1) {
                switch (i) {
                    case 1: printf("%d - População\n", i); break;
                    case 2: printf("%d - Área\n", i); break;
                    case 3: printf("%d - PIB\n", i); break;
                    case 4: printf("%d - Pontos Turísticos\n", i); break;
                    case 5: printf("%d - Densidade Demográfica\n", i); break;
                }
            }
        }
        printf("Opção: ");
        scanf("%d", &atributo2);
    } while (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1);

    // Função para pegar valor do atributo
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
    }

    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
    }

    // Regra de comparação
    float soma1 = 0, soma2 = 0;

    soma1 += (atributo1 == 5) ? (1 / valor1_carta1) : valor1_carta1;
    soma2 += (atributo1 == 5) ? (1 / valor1_carta2) : valor1_carta2;

    soma1 += (atributo2 == 5) ? (1 / valor2_carta1) : valor2_carta1;
    soma2 += (atributo2 == 5) ? (1 / valor2_carta2) : valor2_carta2;

    // Exibição
    printf("\n=== Resultado da Comparação ===\n");
    printf("Cidade 1: %s (%s)\n", nomeCidade1, estado1);
    printf("Cidade 2: %s (%s)\n", nomeCidade2, estado2);

    printf("\nAtributo 1: ");
    switch (atributo1) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
    }
    printf("\n - %s: %.2f", nomeCidade1, valor1_carta1);
    printf("\n - %s: %.2f", nomeCidade2, valor1_carta2);

    printf("\n\nAtributo 2: ");
    switch (atributo2) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
    }
    printf("\n - %s: %.2f", nomeCidade1, valor2_carta1);
    printf("\n - %s: %.2f", nomeCidade2, valor2_carta2);

    printf("\n\nSoma dos atributos (ajustada para densidade):");
    printf("\n - %s: %.2f", nomeCidade1, soma1);
    printf("\n - %s: %.2f", nomeCidade2, soma2);

    // Resultado final
    printf("\n\nResultado Final: ");
    (soma1 > soma2) ? printf("Vencedor: %s\n", nomeCidade1) :
    (soma2 > soma1) ? printf("Vencedor: %s\n", nomeCidade2) :
                      printf("Empate!\n");

    return 0;
}
