#include <stdio.h>

int main() {
    // Definição das variáveis
    char estado1, estado2, codigo1[3], codigo2[3], cidade1[75], cidade2[75];
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;

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

    // Exibição das Comparações
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 2, pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pib_per_capita1 > pib_per_capita2 ? 1 : 2, pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta %d venceu (%d)\n", super_poder1 > super_poder2 ? 1 : 2, super_poder1 > super_poder2);

    // Exibição dos Resultados Finais
    printf("\n--- Resultados Finais ---\n");
    printf("Carta 1 - Super Poder: %.2f\n", super_poder1);
    printf("Carta 2 - Super Poder: %.2f\n", super_poder2);
    
    //comparação de atributos: População
    printf("\n----- Comparação dos Atributos População -----\n");
    printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
   
    if (populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu\n", cidade1);
    }else if (populacao2 > populacao1){
        printf("Resultado: Carta 2 (%s) venceu\n", cidade2);
    }else{
        printf("Resultado: Empate!\n");
    }
     

    return 0;
}
