#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_NUMERIC, "C"); // permite usar ponto como separador decimal.

    char estado [3];
    char carta [10];
    char cidade [50];
    int populacao;
    float area;
    double PIB;
    int pontos;
    float densidade;
    float capita;
    

//Aqui o usuario vai inserir as informações da primeira carta.

    printf("Digite os dados da carta 1.\n");

    printf("Digite o código da carta: \n");
    scanf("%s", carta);

    printf("Digite o estado (sigla): \n");
    scanf("%2s", estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);
    
    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a área (use ponto para decimais): \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos);

  
// Aqui o usuario vai inserir as informações da segunda carta.

    char estado2 [3];
    char carta2 [10];
    char cidade2 [50];
    int populacao2;
    float area2;
    double PIB2;
    int pontos2;
    float densidade2;
    float capita2;
   
    
    printf("\nDigite os dados da carta 2.\n");

    printf("Digite o código da carta: \n");
    scanf("%s", carta2);

    printf("Digite o estado (sigla): \n");
    scanf("%2s", estado2);

    printf("Digite o nome da cidade (sem espaço): \n");
    scanf("%s", cidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (use ponto para decimais): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (use ponto para decimais): \n");
    scanf("%lf", &PIB2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos2);

//Isso será apresentado.
    printf("\n***CARTA 1*** \n");
    printf("Carta: %s\n", carta);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Area: %.2fkm²\n", area);
    printf("PIB: R$%.2lf\n", PIB);
    printf("Pontos turísticos: %d\n", pontos); 
    densidade = (populacao / area);
    printf("Densidade Populacional: %.2fhab/km²\n", densidade);
    capita = (PIB / populacao);
    printf("PIB per Capita: R$%.2f\n", capita);

    printf("\n***CARTA 2*** \n");
    printf("Carta: %s\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2fkm²\n", area2);
    printf("PIB: R$%.2lf\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos2);
    densidade2 = (populacao2 / area2);
    printf("Densidade Populacional: %.2fhab/km²\n", densidade2);
    capita2 = (PIB2 / populacao2);
    printf("PIB per Capita: R$%.2f\n", capita2);
   

    return 0;
}