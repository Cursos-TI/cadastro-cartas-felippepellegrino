#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado[50];
    char CodigoCarta[50];
    char Cidade[100];
    int Populacao;
    float Area;
    float Pib;
    int NumPontosTuristicos;

  // Área para entrada de dados
    printf("Digite o estado: ");
    scanf("%s", Estado);

    printf("Digite o código da carta: ");
    scanf("%s", CodigoCarta);

    printf("Cidade: ");
    scanf("%s", Cidade);

    printf("População: ");
    scanf("%i", &Populacao);

    printf("Área Km²: ");
    scanf("%f", &Area);

    printf("PIB: ");
    scanf("%f", &Pib);

    printf("Número de pontos turísticos: ");
    scanf("%i", &NumPontosTuristicos);


  // Área para exibição dos dados da cidade
    printf("Estado: %s\n", Estado);

    printf("Código da carta: %s\n", CodigoCarta);

    printf("Cidade: %s\n", Cidade);

    printf("População: %i\n", Populacao);

    printf("Área: %f\n", Area);

    printf("PIB: %.2f km²\n", Pib);

    printf("Número de pontos turísticos: %i\n", NumPontosTuristicos);

return 0;
} 
