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
    float SuperPoder1;
    float DensidadeInvertida1;

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
    float SuperPoder2;
    float DensidadeInvertida2;

  // Área para entrada de dados
  // Entrada de dados da Carta 1
    printf("\n=== CARTA 1 ===\n");
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
    DensidadeInvertida1 = 1.0 / DensidadePopulacional1;
    SuperPoder1 = Populacao1 + Area1 + Pib1 + PibPercapta1 + DensidadeInvertida1 + NumPontosTuristicos1;

    //Entrada de dados Carta 2
    printf("\n=== CARTA 2===\n");
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
    scanf("%i", &NumPontosTuristicos2);

    DensidadePopulacional2 = Populacao2 / Area2;
    PibPercapta2 = Pib2 / Populacao2;
    DensidadeInvertida2 = 1.0 / DensidadePopulacional2;
    SuperPoder2 = Populacao2 + Area2 + Pib2 + PibPercapta2 + DensidadeInvertida2 + NumPontosTuristicos2;

  // Área para exibição dos dados da cidade Carta 1
    printf("Estado: %s\n", Estado1);
    printf("Código da carta: %s\n", CodigoCarta1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %i\n", Populacao1);
    printf("Área: %.2fkm²\n", Area1);
    printf("PIB: %.2f\n", Pib1);
    printf("Número de pontos turísticos: %i\n", NumPontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per capta: %.2f\n", PibPercapta1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    // Área para exibição dos dados da cidade Carta 2
    printf("Estado: %s\n", Estado2);
    printf("Código da carta: %s\n", CodigoCarta2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %i\n", Populacao2);
    printf("Área: %.2fkm²\n", Area2);
    printf("PIB: %.2f\n", Pib2);
    printf("Número de pontos turísticos: %i\n", NumPontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per capta: %.2f\n", PibPercapta2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    //Comparativo das cartas
    printf("\n=== COMPARAÇÃO ===\n");

    printf("População: %d\n", Populacao1 > Populacao2);
    printf("Área: %dkm²\n", Area1 > Area2);
    printf("PIB: %d\n", Pib1 > Pib2);
    printf("Número de pontos turísticos: %d\n", NumPontosTuristicos1 > NumPontosTuristicos2);
    printf("Densidade populacional: %d hab/km²\n", DensidadePopulacional1 < DensidadePopulacional2);
    printf("PIB per capta: %d\n", PibPercapta1 > PibPercapta2);
    printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2);

    if(SuperPoder1 > SuperPoder2){
      printf("Carta 1 VENCEU !\n");
    }
    else if(SuperPoder2 > SuperPoder1){
      printf("Carta 2 VENCEU !\n");
    }
    else
    {
      printf("EMPATE !!!\n");
    }
return 0;
} 
