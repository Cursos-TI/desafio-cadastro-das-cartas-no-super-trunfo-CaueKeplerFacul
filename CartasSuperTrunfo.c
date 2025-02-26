#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int turistico1, turistico2;
    float densidadePopulaciona1, densidadePopulaciona2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade1); // Lê a string com espaços

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico1);

    densidadePopulaciona1 = populacao1 / area1;

    pibPerCapita1 = pib1 / (float)populacao1;

    superPoder1 = populacao1 + area1 + pib1 + turistico1 + pibPerCapita1 + (1 / densidadePopulaciona1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade2); 

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico2);

    densidadePopulaciona2 = populacao2 / area2;

    pibPerCapita2 = pib2 / (float)populacao2;

    superPoder2 = populacao2 + area2 + pib2 + turistico2 + pibPerCapita2 + (1 / densidadePopulaciona2);

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f\n", densidadePopulaciona1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f\n", densidadePopulaciona2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    printf("\n=== Comparando As Cartas ===\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Numero de Pontos Turisticos: Carta %d venceu (%d)\n", (turistico1 > turistico2) ? 1 : 2, (turistico1 > turistico2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulaciona1 > densidadePopulaciona2) ? 1 : 2, (densidadePopulaciona1 > densidadePopulaciona2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2));

    return 0;
}
