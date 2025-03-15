#include <stdio.h>

int main(){
    //denominação das variaveis

    char codigo1[30], codigo2[30], estado1[40], estado2[40], cidade1[75], cidade2[75];
    float area1, area2, pib1, pib2;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;

    //insira os dados da carta 01

    printf("Digite uma letra de A a H para simbolizar o primeiro estado. \n");
    printf("Estado:\n");
    printf("%c, &estado1\n");
  
    printf("Digite um núnmero entre 01 e 04 para determinar o número da carta. \n");
    printf("Numero: \n");
    scanf("%2s, codigo1\n");

    printf("Digite o nome da primeira cidade.\n");
    printf("Nome da cidade:\n");
    getchar();
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Informe o número de habitantes da cidade.\n");
    printf("População:\n");
    scanf("%d, &populacao1\n");

    printf("Informe a área territorial em km² da cidade.\n");
    printf("Área em km²:\n");
    scanf("%d, &area1\n");

    printf("Informe o valor do PIB da cidade:\n");
    printf("PIB:\n");
    scanf("%d, &pib1\n");

    printf("Informe quantos pontos turisticos tem a cidade.\n");
    printf("Pontos turisticos:\n");
    scanf("%d, &pontos_turisticos1\n");

    // informe os dados da carta 02

    printf("Digite uma letra de A a H para simbolizar o sgundo estado.\n");
    printf("Estado: \n");
    scanf("%c, &estado2\n");

    printf("Digite um número entre 01 e 04 determinar o numero da carta.\n");
    printf("Numero: \n");
    scanf("%2s, codigo2\n");

    printf("Digite o neme da segunda cidade:");
    printf("Nome da cidade: \n");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Informe o número de habitantes da cidade.\n");
    printf("População: \n");
    scanf("%d, &populacao2");

    printf("Informe a área territorial em km² da cidade.\n");
    print("Área em km² \n");
    scanf("%d, &area2\n");

    printf("Informe o valor do PIB da cidade.");
    printf("PIB: \n");
    scanf("%d, &pib2\n");

    printf("Informe quantos pontos turisticos tem a cidade.\n");
    printf("Pontos turisticos: \n");
    scanf("%d, &pontos_turisticos2\n");




    printf("Digite uma letra de A a H para simbolizar o segundo estado.\n");
    printf("Estado: ");
    scanf("%c, &estado2 ");

    printf("Digite um número entre 01 e 04 determinar o numero da carta.\n");
    printf("Numero: ");
    scanf("%2s, codigo2 ");

    printf("Digite o neme da segunda cidade.\n");
    printf("Nome da cidade: \n");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Informe o número de habitantes da cidade.\n");
    printf("População: ");
    scanf("%d, &populacao2 ");

    printf("Informe a área territorial em km² da cidade.\n");
    printf("Área em km² ");
    scanf("%f, &area2 ");

    printf("Informe o valor do PIB da cidade.\n");
    printf("PIB: ");
    scanf("%f, &pib2 ");

    printf("Informe quantos pontos turisticos tem a cidade.\n");
    printf("Pontos turisticos: ");
    scanf("%d, &pontos_turisticos2 ");

    // Dados da carta 0

    printf("Estado: '%c' \n", estado1);
    printf("Codigo: %c \n", estado1, codigo1);
    printf("Nome da cidade: %s", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area em km²: %.2f \n", area1);
    printf("PIB: %.2f bilhões de reais/n", pib1);
    printf("Pontos turisticos: %d \n", pontos_turisticos1);








    return 0;
}
