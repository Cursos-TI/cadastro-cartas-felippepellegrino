#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades Carta 1
    char Estado1[50];
    char CodigoCarta1[50];
    char Cidade1[100];
    int Populacao1;
    float Area1;
    float Pib1;
    int NumPontosTuristicos1;
    float DensidadePopulacional1;
    float PibPercapta1;

    // Área para definição das variáveis para armazenar as propriedades das cidades Carta 2
    char Estado2[50];
    char CodigoCarta2[50];
    char Cidade2[100];
    int Populacao2;
    float Area2;
    float Pib2;
    int NumPontosTuristicos2;
    float DensidadePopulacional2;
    float PibPercapta2;

  // Área para entrada de dados
  // Entrada de dados da Carta 1
    printf("=== CARTA 1 ===\n");
    printf("Estado: ");
    scanf("%s", Estado1);
    printf("Código da carta: ");
    scanf("%s", CodigoCarta1);
    printf("Cidade: ");
    scanf("%s", Cidade1);
    printf("População: ");
    scanf("%i", &Populacao1);
    printf("Área Km²: ");
    scanf("%f", &Area1);
    printf("PIB: ");
    scanf("%f", &Pib1);
    printf("Número de pontos turísticos: ");
    scanf("%i", &NumPontosTuristicos1);

    DensidadePopulacional1 = Populacao1 / Area1;
    PibPercapta1 = Pib1 / Populacao1;

    //Entrada de dados Carta 2
    printf("=== CARTA 2===\n");
    printf("Digite o estado: ");
    scanf("%s", Estado2);
    printf("Código da carta: ");
    scanf("%s", CodigoCarta2);
    printf("Cidade: ");
    scanf("%s", Cidade2);
    printf("População: ");
    scanf("%i", &Populacao2);
    printf("Area Km²: ");
    scanf("%f", &Area2);
    printf("PIB: ");
    scanf("%f", &Pib2);
    printf("Número de pontos turísticos: ");
    scanf("%f", &NumPontosTuristicos2);

    DensidadePopulacional2 = Populacao2 / Area2;
    PibPercapta2 = Pib2 / Populacao2;

  // Área para exibição dos dados da cidade Carta 1
    printf("Estado: %s\n", Estado1);
    printf("Código da carta: %s\n", CodigoCarta1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %i\n", Populacao1);
    printf("Área: %f\n", Area1);
    printf("PIB: %.2f km²\n", Pib1);
    printf("Número de pontos turísticos: %i\n", NumPontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per capta: %.2f\n", PibPercapta1);

    // Área para exibição dos dados da cidade Carta 2
    printf("Estado: %s\n", Estado2);
    printf("Código da carta: %s\n", CodigoCarta2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %i\n", Populacao2);
    printf("Área: %f\n", Area2);
    printf("PIB: %.2f km²\n", Pib2);
    printf("Número de pontos turísticos: %i\n", NumPontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per capta: %.2f\n", PibPercapta2);

return 0;
} 
