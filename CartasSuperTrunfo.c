#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // ---------- Carta 1 ----------
    char estado1[3];
    char codigo1[4]; // Exemplo: "A01"
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;    
    float pibPerCapita1;  

    // Entrada dos dados da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Digite o estado: ");
    scanf(" %2s", estado1);

    printf("Digite o código da carta (ex: B01): ");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade: ");
    scanf(" %49s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

     // Cálculo da densidade populacional
    densidade1 = populacao1 / area1;

    // Cálculo do PIB per capita
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    printf("\n");

    // ---------- Carta 2 ----------
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;    
    float pibPerCapita2;  

    // Entrada dos dados da segunda carta
    printf("Cadastro da Carta 2\n");
    printf("Digite o estado: ");
    scanf(" %2s", estado2);

    printf("Digite o código da carta (ex: B01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %49s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

     // Cálculo da densidade populacional
    densidade2 = populacao2 / area2;

    // Cálculo do PIB per capita
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    printf("\n");

    // ---------- Saída formatada ----------
    printf("\n=== Carta 1 ===\n");
    printf("\n");
    printf("Estado: %3s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("\n");
    printf("Estado: %3s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("\n");



return 0;
} 
