#include <stdio.h>


int main() {

    //delcaração das variaveis da primeira carta

    char estado1[3];
    char codCarta1[50];
    char nomeCid1[100];
    unsigned long int  populacao1;
    float areaKm2_1;
    float pib1;
    int pontoTuri1;
    float densidadePop1;
    float pibPerCapita1;
     

    char estado2[3];
    char codCarta2[50];
    char nomeCid2[100];
    unsigned long int  populacao2;
    float areaKm2_2;
    float pib2;
    int pontoTuri2;
    float densidadePop2;
    float pibPerCapita2;
   
    // cadastro da primeira  carata
    
    printf("Cadastro da Primeira Carta \n");

    printf("Informe o UF do estado (ex: SP): \n");
    scanf("%s", estado1);

    printf("Informe o codigo da carta: (ex: A01)\n");
    scanf(" %[^\n]s", &codCarta1);

    printf("Informe o nome da cidade: \n");
    scanf(" %[^\n]s", nomeCid1);

    printf("Informe a populacao da cidade: \n");
    scanf("%i", &populacao1);

    printf("Informe a area em Km2: \n");
    scanf("%f", &areaKm2_1);

    printf("Informe o PIB: \n");
    scanf("%f", &pib1);

    printf("Informe quantos pontos turisticos: \n");
    scanf("%d", &pontoTuri1);

    // calculo da densidade e per capita

    densidadePop1 = populacao1 / areaKm2_1;
    pibPerCapita1 = pib1 / populacao1;
    float superPoder1 =  (float) populacao1 + areaKm2_1  + pontoTuri1 + pib1 + (1.00/densidadePop1);

    
     

        printf("Cadastro da Segunda Carta \n");
        printf("Informe o UF do estado (ex: RJ): \n");
        scanf(" %s", estado2);

        printf("Informe o codigo da carta: \n");
        scanf(" %[^\n]s", &codCarta2 );

        printf("Informe o nome da cidade: \n");
        scanf(" %[^\n]s", nomeCid2);

        printf("Informe a populacao da cidade: \n");
        scanf("%i", &populacao2);

        printf("Informe a area em Km2: \n");
        scanf("%f", &areaKm2_2);

        printf("Informe o PIB: \n");
        scanf("%f", &pib2);

        printf("Informe quantos pontos turisticos: \n");
        scanf("%d", &pontoTuri2);

        

        // calculo da densidade e per capita

        densidadePop2 = populacao2 / areaKm2_2;
        pibPerCapita2 = pib2 / populacao2;
        float superPoder2 =  (float) populacao2 + areaKm2_2  + pontoTuri2 + pib2 + (1.00/densidadePop2);
        

        //  dados da primeira carta
    
    printf("Dados da Primeira Carta\n");
    printf("Estado (UF): %s\n", estado1);
    printf("Codigo da Carta: %s\n", codCarta1);
    printf("Cidade: %s\n", nomeCid1);
    printf("Populacao: %d\n", populacao1);
    printf("Area em Km2: %.2f\n", areaKm2_1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePop1);
    printf("PIB: %.2f\n", pib1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Pontos Turisticos: %d\n", pontoTuri1);
    printf("Super Poder: %.2f pontos\n", superPoder1);

     // dados da segunda carta

    printf("Dados da Segunda Carta \n");
    printf("Estado (UF): %s\n", estado2);
    printf("Codigo da Carta: %s\n", codCarta2);
    printf("Cidade: %s\n", nomeCid2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em Km2: %.2f\n", areaKm2_2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePop2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Pontos Turisticos: %d\n", pontoTuri2);
    printf("Super Poder: %.2f pontos\n", superPoder2);

    // Comparação das cartas 

    printf("1 significa Carta 1 Venceu | 0 significa carta 2 Venceu\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", areaKm2_1 > areaKm2_2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Número de pontos turísticos: %d\n", pontoTuri1 > pontoTuri2);
    printf("Densidade populacional: %d\n", densidadePop1 < densidadePop2);
    printf("PIB per capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);



    return 0;
}

