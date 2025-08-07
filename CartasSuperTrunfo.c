#include <stdio.h>

int main() {

    char estado[2];
    int codCarta;
    char nomeCid[100];
    int populacao;
    float areaKm2;
    float pib;
    int pontoTuri;

    printf("Informe os dados da prmeira carta\n");

    
    printf("informe o UF do estado: \n");
    scanf("%s", estado);


    printf("informe o codigo da carta!\n");
    scanf("%d",&codCarta );

    printf("informe o nome da cidade:\n");
    scanf("%[^\n]s", nomeCid);

    printf("informe a população da cidade:\n");
    scanf("%d", &populacao);

    printf("informe o Km2 do estado:\n");
    scanf("%f", &areaKm2);

    printf("informe o PIB do estado:\n");
    scanf("%f", &pib);

    printf("inforem quantos pontos turisticos:\n");
    scanf("%d", &pontoTuri);

    printf("\n--- Dados da Carta ---\n");
    printf("Estado (UF): %s\n", estado);
    printf("Codigo da Carta: %d\n", codCarta);
    printf("Cidade: %s\n", nomeCid);
    printf("Populacao: %d\n", populacao);
    printf("Area em Km2: %.2f\n", areaKm2);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontoTuri);




  

    return 0;
}
