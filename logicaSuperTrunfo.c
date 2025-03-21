#include <stdio.h>

int main() {
    // Definição das variáveis
    char estado1, estado2, codigo1[3], codigo2[3], cidade1[75], cidade2[75];
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2, escolha;

    // Inserção dos dados da Carta 1
    printf("Digite uma letra de A a H para simbolizar o primeiro estado:\n");
    scanf(" %c", &estado1);

    printf("Digite um número entre 01 e 04 para determinar o número da carta:\n");
    scanf("%2s", codigo1);

    printf("Digite o nome da primeira cidade:\n");
    getchar();
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Informe o número de habitantes da cidade:\n");
    scanf("%lu", &populacao1);

    printf("Informe a área territorial em km² da cidade:\n");
    scanf("%f", &area1);

    printf("Informe o valor do PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Informe quantos pontos turísticos tem a cidade:\n");
    scanf("%d", &pontos_turisticos1);

    // Inserção dos dados da Carta 2
    printf("\nDigite uma letra de A a H para simbolizar o segundo estado:\n");
    scanf(" %c", &estado2);

    printf("Digite um número entre 01 e 04 para determinar o número da carta:\n");
    scanf("%2s", codigo2);

    printf("Digite o nome da segunda cidade:\n");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Informe o número de habitantes da cidade:\n");
    scanf("%lu", &populacao2);

    printf("Informe a área territorial em km² da cidade:\n");
    scanf("%f", &area2);

    printf("Informe o valor do PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Informe quantos pontos turísticos tem a cidade:\n");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da Densidade Populacional e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // Menu interativo para escolha do atributo de comparação
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\n--- Comparação de Cartas ---\n");

    switch (escolha) {
        case 1:
            printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
            break;
        case 2:
            printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
            break;
        case 3:
            printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
            break;
        case 4:
            printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 2, pontos_turisticos1 > pontos_turisticos2);
            break;
        case 5:
            printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
            break;
        case 6:
            printf("PIB per Capita: Carta %d venceu (%d)\n", pib_per_capita1 > pib_per_capita2 ? 1 : 2, pib_per_capita1 > pib_per_capita2);
            break;
        default:
            printf("Opção inválida.\n");
    }

    // Exibição dos Resultados Finais
    printf("\n--- Resultados Finais ---\n");
    printf("Carta 1 - Super Poder: %.2f\n", super_poder1);
    printf("Carta 2 - Super Poder: %.2f\n", super_poder2);
    
    return 0;
}
