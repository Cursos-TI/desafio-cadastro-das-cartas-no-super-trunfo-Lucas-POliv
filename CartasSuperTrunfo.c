#include <stdio.h>

int main () {
    char estado [5];
    char carta [10];
    char cidade [20];
    int populacao;
    float area;
    float PIB;
    int pontos;

// Aqui o usuario vai inserir as informações da primeira carta.

    printf("Digite os dados da carta 1.\n");

    printf("Digite o número de sua carta: \n");
    scanf("%s", &carta);

    printf("Digite o estado (sigla): \n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos);

  
// Aqui o usuario vai inserir as informações da segunda carta.

    char estado2 [5];
    char carta2 [10];
    char cidade2 [20];
    int populacao2;
    float area2;
    float PIB2;
    int pontos2;
    
    printf("\nDigite os dados da carta 2.\n");

    printf("Digite o número de sua carta: \n");
    scanf("%s", &carta2);

    printf("Digite o estado (sigla): \n");
    scanf("%s", &estado2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos2);

//Isso será apresentado.

    printf("\nCarta 1: \n");

    printf("Codigo da carta: %s\n", carta);

    printf("Estado: %s\n", estado);

    printf("Cidade: %s\n", cidade);

    printf("População: %d\n", populacao);

    printf("Area: %.2fkm²\n", area);

    printf("PIB: R$ %.2f\n", PIB);

    printf("Pontos turísticos: %d\n", pontos);

    printf("\nCarta 2: \n");

    printf("Codigo da carta: %s\n", carta2);

    printf("Estado: %s\n", estado2);

    printf("Cidade: %s\n", cidade2);

    printf("População: %d\n", populacao2);

    printf("Area: %.2fkm²\n", area2);

    printf("PIB: R$ %.2f\n", PIB2);

    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}