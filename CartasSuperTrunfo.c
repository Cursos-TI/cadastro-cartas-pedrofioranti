 #include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];

    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    float densidade1, densidade2;
    float pibCapita1, pibCapita2;

    float superPoder1, superPoder2;

    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibCapita1 = pib1 / populacao1;

    superPoder1 = (float) populacao1
                + area1
                + pib1
                + pontos1
                + pibCapita1
                + (1.0f / densidade1);

    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibCapita2 = pib2 / populacao2;

    superPoder2 = (float) populacao2
                + area2
                + pib2
                + pontos2
                + pibCapita2
                + (1.0f / densidade2);

    int popVence = populacao1 > populacao2;
    int areaVence = area1 > area2;
    int pibVence = pib1 > pib2;
    int pontosVence = pontos1 > pontos2;

    int densidadeVence = densidade1 < densidade2;
    int pibCapitaVence = pibCapita1 > pibCapita2;

    int superPoderVence = superPoder1 > superPoder2;

    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", popVence ? 1 : 2, popVence);
    printf("Area: Carta %d venceu (%d)\n", areaVence ? 1 : 2, areaVence);
    printf("PIB: Carta %d venceu (%d)\n", pibVence ? 1 : 2, pibVence);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", pontosVence ? 1 : 2, pontosVence);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadeVence ? 1 : 2, densidadeVence);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibCapitaVence ? 1 : 2, pibCapitaVence);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoderVence ? 1 : 2, superPoderVence);

    return 0;
}

