#include <stdio.h>


int main() {

    char estado1[3];
    int codCarta1;
    char nomeCid1[100];
    int populacao1;
    float areaKm2_1;
    float pib1;
    int pontoTuri1;
    float densidadePop1;
    float pibPerCapita1;

    
    char estado2[3];
    int codCarta2;
    char nomeCid2[100];
    int populacao2;
    float areaKm2_2;
    float pib2;
    int pontoTuri2;
    float densidadePop2;
    float pibPerCapita2;

    
    printf("Cadastro da Primeira Carta \n");

    printf("Informe o UF do estado (ex: SP): \n");
    scanf("%s", estado1);

    printf("Informe o codigo da carta: \n");
    scanf("%d", &codCarta1);

    printf("Informe o nome da cidade: \n");
    scanf(" %[^\n]s", nomeCid1);

    printf("Informe a populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Informe a area em Km2: \n");
    scanf("%f", &areaKm2_1);

    printf("Informe o PIB: \n");
    scanf("%f", &pib1);

    printf("Informe quantos pontos turisticos: \n");
    scanf("%d", &pontoTuri1);

    densidadePop1 = populacao1 / areaKm2_1;
    pibPerCapita1 = pib1 / populacao1;

     
        printf("Cadastro da Segunda Carta \n");
        printf("Informe o UF do estado (ex: RJ): \n");
        scanf(" %s", estado2);

        printf("Informe o codigo da carta: \n");
        scanf("%d", &codCarta2);

        printf("Informe o nome da cidade: \n");
        scanf(" %[^\n]s", nomeCid2);

        printf("Informe a populacao da cidade: \n");
        scanf("%d", &populacao2);

        printf("Informe a area em Km2: \n");
        scanf("%f", &areaKm2_2);

        printf("Informe o PIB: \n");
        scanf("%f", &pib2);

        printf("Informe quantos pontos turisticos: \n");
        scanf("%d", &pontoTuri2);


    densidadePop2 = populacao2 / areaKm2_2;
    pibPerCapita2 = pib2 / populacao2;

    
    printf("Dados da Primeira Carta\n");
    printf("Estado (UF): %s\n", estado1);
    printf("Codigo da Carta: %d\n", codCarta1);
    printf("Cidade: %s\n", nomeCid1);
    printf("Populacao: %d\n", populacao1);
    printf("Area em Km2: %.2f\n", areaKm2_1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePop1);
    printf("PIB: %.2f\n", pib1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Pontos Turisticos: %d\n", pontoTuri1);

    printf("Dados da Segunda Carta \n");
    printf("Estado (UF): %s\n", estado2);
    printf("Codigo da Carta: %d\n", codCarta2);
    printf("Cidade: %s\n", nomeCid2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em Km2: %.2f\n", areaKm2_2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePop2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Pontos Turisticos: %d\n", pontoTuri2);

    return 0;
}