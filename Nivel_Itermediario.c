#include <stdio.h>

int main() {
    // Definição das variáveis
    char estado1, estado2, codigo1[3], codigo2[3], cidade1[75], cidade2[75];
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;

    // Inserção dos dados da Carta 1
    printf("Digite uma letra de A a H para simbolizar o primeiro estado:\n");
    scanf(" %c", &estado1); // Adicionado espaço antes do %c para evitar problemas com buffer

    printf("Digite um número entre 01 e 04 para determinar o número da carta:\n");
    scanf("%2s", codigo1);

    printf("Digite o nome da primeira cidade:\n");
    getchar();  // Limpar buffer
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Informe o número de habitantes da cidade:\n");
    scanf("%d", &populacao1);

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
    getchar();  // Limpar buffer
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Informe o número de habitantes da cidade:\n");
    scanf("%d", &populacao2);

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

    // Exibição dos dados da Carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populaciona: %.2f habitantes/km²\n", densidade1);
    printf("Pib Per Capita: %.2f reais\n", pib_per_capita1);

    // Exibição dos dados da Carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populaciona: %.2f habitantes/km²\n", densidade2);
    printf("Pib Per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}