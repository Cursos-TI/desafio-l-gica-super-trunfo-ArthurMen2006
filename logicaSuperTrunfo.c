#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

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

            int atributo1, atributo2;
            double valor1_carta1, valor1_carta2;
            double valor2_carta1, valor2_carta2;
            double soma1, soma2;
            char nome_atributo1[30], nome_atributo2[30];

            // apos criar as cartas, agora e hora de jogar

            printf("\n=== PRIMEIRO ATRIBUTO ===\n");
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            printf("Escolha: ");
            scanf("%d", &atributo1);

            printf("\n=== SEGUNDO ATRIBUTO ===\n");

            switch(atributo1)
            {
                case 1:
                    printf("2 - Area\n");
                    printf("3 - PIB\n");
                    printf("4 - Pontos Turisticos\n");
                    printf("5 - Densidade Populacional\n");
                    printf("6 - PIB per Capita\n");
                    break;

                case 2:
                    printf("1 - Populacao\n");
                    printf("3 - PIB\n");
                    printf("4 - Pontos Turisticos\n");
                    printf("5 - Densidade Populacional\n");
                    printf("6 - PIB per Capita\n");
                    break;

                case 3:
                    printf("1 - Populacao\n");
                    printf("2 - Area\n");
                    printf("4 - Pontos Turisticos\n");
                    printf("5 - Densidade Populacional\n");
                    printf("6 - PIB per Capita\n");
                    break;

                case 4:
                    printf("1 - Populacao\n");
                    printf("2 - Area\n");
                    printf("3 - PIB\n");
                    printf("5 - Densidade Populacional\n");
                    printf("6 - PIB per Capita\n");
                    break;

                case 5:
                    printf("1 - Populacao\n");
                    printf("2 - Area\n");
                    printf("3 - PIB\n");
                    printf("4 - Pontos Turisticos\n");
                    printf("6 - PIB per Capita\n");
                    break;

                case 6:
                    printf("1 - Populacao\n");
                    printf("2 - Area\n");
                    printf("3 - PIB\n");
                    printf("4 - Pontos Turisticos\n");
                    printf("5 - Densidade Populacional\n");
                    break;
            }

            printf("Escolha: ");
            scanf("%d", &atributo2);

            // Req. 1: impede escolha duplicada
            if(atributo1 == atributo2)
            {
                printf("Erro: nao pode escolher o mesmo atributo duas vezes!\n");
                return 0;
            }

            // Req. 2 + Req. 6: obtém valores e nomes do atributo 1
            switch(atributo1)
            {
                case 1:
                    valor1_carta1 = (double)populacao1;
                    valor1_carta2 = (double)populacao2;
                    printf(nome_atributo1, "Populacao");
                    break;
                case 2:
                    valor1_carta1 = area1;
                    valor1_carta2 = area2;
                    printf(nome_atributo1, "Area");
                    break;
                case 3:
                    valor1_carta1 = pib1;
                    valor1_carta2 = pib2;
                    printf(nome_atributo1, "PIB");
                    break;
                case 4:
                    valor1_carta1 = ponto_turistico1;
                    valor1_carta2 = ponto_turistico2;
                    printf(nome_atributo1, "Pontos Turisticos");
                    break;
                case 5:
                    valor1_carta1 = 1.0 / densidade1;
                    valor1_carta2 = 1.0 / densidade2;
                    printf(nome_atributo1, "Densidade Populacional");
                    break;
                case 6:
                    valor1_carta1 = pib_capita1;
                    valor1_carta2 = pib_capita2;
                    printf(nome_atributo1, "PIB per Capita");
                    break;
                default:
                    valor1_carta1 = 0;
                    valor1_carta2 = 0;
                    printf(nome_atributo1, "Desconhecido");
            }

            switch(atributo2)
            {
                case 1:
                    valor2_carta1 = (double)populacao1;
                    valor2_carta2 = (double)populacao2;
                    printf(nome_atributo2, "Populacao");
                    break;
                case 2:
                    valor2_carta1 = area1;
                    valor2_carta2 = area2;
                    printf(nome_atributo2, "Area");
                    break;
                case 3:
                    valor2_carta1 = pib1;
                    valor2_carta2 = pib2;
                    printf(nome_atributo2, "PIB");
                    break;
                case 4:
                    valor2_carta1 = ponto_turistico1;
                    valor2_carta2 = ponto_turistico2;
                    printf(nome_atributo2, "Pontos Turisticos");
                    break;
                case 5:
                    valor2_carta1 = 1.0 / densidade1;
                    valor2_carta2 = 1.0 / densidade2;
                    printf(nome_atributo2, "Densidade Populacional");
                    break;
                case 6:
                    valor2_carta1 = pib_capita1;
                    valor2_carta2 = pib_capita2;
                    printf(nome_atributo2, "PIB per Capita");
                    break;
                default:
                    valor2_carta1 = 0;
                    valor2_carta2 = 0;
                    printf(nome_atributo2, "Desconhecido");
            }

            soma1 = valor1_carta1 + valor2_carta1;
            soma2 = valor1_carta2 + valor2_carta2;


            printf("\n=========== RESULTADO ===========\n");
            printf("Carta 1: %s\n", cidade1);
            printf("Carta 2: %s\n\n", cidade2);

            printf("Atributos usados: %s e %s\n\n", nome_atributo1, nome_atributo2);

            printf("%s:\n", nome_atributo1);
            printf("  Carta 1 (%s) = %.2f\n", cidade1, valor1_carta1);
            printf("  Carta 2 (%s) = %.2f\n\n", cidade2, valor1_carta2);

            printf("%s:\n", nome_atributo2);
            printf("  Carta 1 (%s) = %.2f\n", cidade1, valor2_carta1);
            printf("  Carta 2 (%s) = %.2f\n\n", cidade2, valor2_carta2);

            printf("Soma Carta 1 (%s) = %.2f\n", cidade1, soma1);
            printf("Soma Carta 2 (%s) = %.2f\n\n", cidade2, soma2);

            if(soma1 > soma2)
            {
                printf("VENCEDOR: %s\n", cidade1);
            }
            else if(soma2 > soma1)
            {
                printf("VENCEDOR: %s\n", cidade2);
            }
            else
            {
                printf("EMPATE!\n");
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