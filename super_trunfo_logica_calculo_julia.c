#include <stdio.h>

// Propriedades da primeira carta.
char estado_carta1;
char codigo_carta_carta1[5];
char nome_cidade_carta1[20];
int populacao_carta1;
float area_carta1;
double pib_carta1;
int pontos_turisticos_carta1;

// Propriedades da segunda carta.
char estado_carta2;
char codigo_carta_carta2[5];
char nome_cidade_carta2[20];
int populacao_carta2;
float area_carta2;
double pib_carta2;
int pontos_turisticos_carta2;

//Propriedades do cálculo de densidade populacional e PIB per capita.
float densidade_populacional_carta1, densidade_populacional_carta2;
float pib_per_capita_carta1, pib_per_capita_carta2;


int main() {
    // Lendo propriedades da primeira carta.
    printf("Carta 1: \n");
    printf("Digite o Estado: \n");
    scanf("%c", &estado_carta1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_carta_carta1);

    printf("Digite o nome da Cidade: \n");
    // Usei isso pois estava dando problema com o espaço no meio do nome.
    scanf(" %[^\n]", &nome_cidade_carta1);

    printf("Digite a população: \n");
    scanf("%d", &populacao_carta1);

    printf("Digite a área: \n");
    scanf("%f", &area_carta1);

    printf("Digite o PIB: \n");
    // Usei double pois o float não estava imprimindo o número com precisão, por ser número grande, na casa do bilhão.
    scanf("%lf", &pib_carta1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_carta1);

    densidade_populacional_carta1 = (float)(populacao_carta1 / area_carta1);
    pib_per_capita_carta1 = (float)(pib_carta1 / populacao_carta1);

     // Lendo propriedades da segunda carta.
    printf("Carta 2: \n");
    printf("Digite o Estado: \n");
    scanf("%s", &estado_carta2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_carta_carta2);

    printf("Digite o nome da Cidade: \n");
    // Usei isso pois estava dando problema com o espaço no meio do nome.
    scanf(" %[^\n]", &nome_cidade_carta2);

    printf("Digite a população: \n");
    scanf("%d", &populacao_carta2);

    printf("Digite a área: \n");
    scanf("%f", &area_carta2);

    printf("Digite o PIB: \n");
    // Usei double pois o float não estava imprimindo o número com precisão, por ser número grande, na casa do bilhão.
    scanf("%lf", &pib_carta2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_carta2);

    // Lógica para realização dos cálculos de densidade populacional e PIB per Capita.
    densidade_populacional_carta2 = (populacao_carta2 / area_carta2);
    pib_per_capita_carta2 = (pib_carta2 / populacao_carta2);

    // Imprimindo linha em branco.
    printf("\n");

    // Imprimindo informações da primeira carta.
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado_carta1);
    printf("Código: %s \n", codigo_carta_carta1);
    printf("Nome da Cidade: %s \n", nome_cidade_carta1);
    printf("População: %d \n", populacao_carta1);
    printf("Área: %.2f km² \n", area_carta1);
    printf("PIB: %.2lf de reais \n", pib_carta1);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos_carta1);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional_carta1);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita_carta1);
    
    // Imprimindo linha em branco.
    printf("\n");

    // Imprimindo informações da segunda carta.
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado_carta2);
    printf("Código: %s \n", codigo_carta_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade_carta2);
    printf("População: %d \n", populacao_carta2);
    printf("Área: %.2f km² \n", area_carta2);
    printf("PIB: %.2lf de reais \n", pib_carta2);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos_carta2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional_carta2);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita_carta2);

    // Imprimindo linha em branco.
    printf("\n");

    return 0;
}
