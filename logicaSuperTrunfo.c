#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  
    // Área para definição das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];

    unsigned long int populacao1, populacao2;
    int ponto_turistico1, ponto_turistico2;

    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pib_capita1, pib_capita2;

    // Entrada de dados da Carta 1
    printf("Bem-vindo ao Super Trunfo C!\n");
    printf("Vamos criar duas cartas com o tema 'Paises'\n\n");

    printf("=== CARTA 1 ===\n");

    printf("Digite apenas uma letra para o estado: ");
    scanf(" %c", &estado1);

    printf("Digite 2 numeros para o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a area da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &ponto_turistico1);

    // Entrada de dados da Carta 2
    printf("\n=== CARTA 2 ===\n");

    printf("Digite apenas uma letra para o estado: ");
    scanf(" %c", &estado2);

    printf("Digite 2 numeros para o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &ponto_turistico2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_capita1 = (pib1 * 1000000000.0) / populacao1;
    pib_capita2 = (pib2 * 1000000000.0) / populacao2;

    // Exibição das cartas

    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);

    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pib_capita2);

    // Área de resultados
    printf("RESULTADOS!!\n");
    if (populacao1 > populacao2)
        printf("Populacao: Carta 1 ganhou\n");
    else
        printf("Populacao: Carta 2 ganhou\n");

    if (area1 > area2)
        printf("Area: Carta 1 ganhou\n");
    else
        printf("Area: Carta 2 ganhou\n");

    if (pib1 > pib2)
        printf("PIB: Carta 1 ganhou\n");
    else
        printf("PIB: Carta 2 ganhou\n");

    if (ponto_turistico1 > ponto_turistico2)
        printf("Pontos Turisticos: Carta 1 ganhou\n");
    else
        printf("Pontos Turisticos: Carta 2 ganhou\n");

    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 ganhou\n");
    else
        printf("Densidade Populacional: Carta 2 ganhou\n");

    if (pib_capita1 > pib_capita2)
        printf("PIB per Capita: Carta 1 ganhou\n");
    else
        printf("PIB per Capita: Carta 2 ganhou\n");

    return 0;
}
