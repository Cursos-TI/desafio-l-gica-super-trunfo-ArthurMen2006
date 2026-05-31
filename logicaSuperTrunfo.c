#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

 //setor de variaveis

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];

    unsigned long int populacao1, populacao2;
    int ponto_turistico1, ponto_turistico2;

    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pib_capita1, pib_capita2;

    int opcao;

 // introduçao do super trunfo

    printf("=== SUPER TRUNFO ===\n");
    printf("1 - Jogar\n");
    printf("2 - Ver Regras\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

 // setor de escolha

    switch(opcao)
    {
        case 1:

            printf("\n=== CARTA 1 ===\n");

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

            densidade1 = populacao1 / area1;
            densidade2 = populacao2 / area2;

            pib_capita1 = (pib1 * 1000000000.0) / populacao1;
            pib_capita2 = (pib2 * 1000000000.0) / populacao2;

            printf("\n=== CARTA 1 ===\n");
            printf("Estado: %c\n", estado1);
            printf("Codigo: %c%s\n", estado1, codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("Populacao: %lu\n", populacao1);
            printf("Area: %.2f km²\n", area1);
            printf("PIB: %.2f bilhoes\n", pib1);
            printf("Pontos Turisticos: %d\n", ponto_turistico1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
            printf("PIB per Capita: %.2f reais\n", pib_capita1);

            printf("\n=== CARTA 2 ===\n");
            printf("Estado: %c\n", estado2);
            printf("Codigo: %c%s\n", estado2, codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("Populacao: %lu\n", populacao2);
            printf("Area: %.2f km²\n", area2);
            printf("PIB: %.2f bilhoes\n", pib2);
            printf("Pontos Turisticos: %d\n", ponto_turistico2);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
            printf("PIB per Capita: %.2f reais\n", pib_capita2);

  // apos criar as cartas, agora e hora de jogar

            printf("\n=== ESCOLHA O ATRIBUTO ===\n");
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            printf("Opcao: ");
            scanf("%d", &opcao);

            switch(opcao)
            {
                case 1:
                    if(populacao1 > populacao2)
                        printf("Carta 1 venceu!\n");
                    else if(populacao2 > populacao1)
                        printf("Carta 2 venceu!\n");
                    else
                        printf("Empate!\n");
                    break;

                case 2:
                    if(area1 > area2)
                        printf("Carta 1 venceu!\n");
                    else if(area2 > area1)
                        printf("Carta 2 venceu!\n");
                    else
                        printf("Empate!\n");
                    break;

                case 3:
                    if(pib1 > pib2)
                        printf("Carta 1 venceu!\n");
                    else if(pib2 > pib1)
                        printf("Carta 2 venceu!\n");
                    else
                        printf("Empate!\n");
                    break;

                case 4:
                    if(ponto_turistico1 > ponto_turistico2)
                        printf("Carta 1 venceu!\n");
                    else if(ponto_turistico2 > ponto_turistico1)
                        printf("Carta 2 venceu!\n");
                    else
                        printf("Empate!\n");
                    break;

                case 5:
                    if(densidade1 < densidade2)
                        printf("Carta 1 venceu!\n");
                    else if(densidade2 < densidade1)
                        printf("Carta 2 venceu!\n");
                    else
                        printf("Empate!\n");
                    break;

                case 6:
                    if(pib_capita1 > pib_capita2)
                        printf("Carta 1 venceu!\n");
                    else if(pib_capita2 > pib_capita1)
                        printf("Carta 2 venceu!\n");
                    else
                        printf("Empate!\n");
                    break;

                default:
                    printf("Opcao invalida!\n");
            }

            break;

        case 2:
            printf("\n=== REGRAS ===\n");
            printf("- Cada carta representa uma cidade.\n");
            printf("- Escolha um atributo para comparar.\n");
            printf("- Ganha a carta com o maior valor.\n");
            printf("- Na densidade populacional, vence o menor valor.\n");
            printf("- Se os valores forem iguais, ocorre empate.\n");
            break;

        case 3:
            printf("Saindo do jogo...\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
