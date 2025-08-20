#include <stdio.h>

// Propriedades da primeira carta.
char estado_carta1;
char codigo_carta_carta1[5];
char nome_cidade_carta1[20];
int populacao_carta1;
float area_carta1;
float pib_carta1;
int pontos_turisticos_carta1;

// Propriedades da segunda carta.
char estado_carta2;
char codigo_carta_carta2[5];
char nome_cidade_carta2[20];
int populacao_carta2;
float area_carta2;
float pib_carta2;
int pontos_turisticos_carta2;

int main() {
    // Lendo propriedades da primeira carta.
    printf("Carta 1: \n");
    printf("Digite o Estado: \n");
    scanf("%s", &estado_carta1);

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
    scanf("%f", &pib_carta1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_carta1);

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
    scanf("%f", &pib_carta2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_carta2);

    // Imprimindo linha em branco.
    printf("\n");

    // Imprimindo informações da primeira carta.
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado_carta1);
    printf("Código: %s \n", codigo_carta_carta1);
    printf("Nome da Cidade: %s \n", nome_cidade_carta1);
    printf("População: %d \n", populacao_carta1);
    printf("Área: %f km² \n", area_carta1);
    printf("PIB: %f bilhões de reais \n", pib_carta1);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos_carta1);
    
    // Imprimindo linha em branco.
    printf("\n");

    // Imprimindo informações da segunda carta.
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado_carta2);
    printf("Código: %s \n", codigo_carta_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade_carta2);
    printf("População: %d \n", populacao_carta2);
    printf("Área: %f km² \n", area_carta2);
    printf("PIB: %f bilhões de reais \n", pib_carta2);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos_carta2);

    // Imprimindo linha em branco.
    printf("\n");

    return 0;
}
