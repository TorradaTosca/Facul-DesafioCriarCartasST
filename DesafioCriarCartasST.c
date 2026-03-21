#include <stdio.h>
#include <string.h>

//Funcao para limpar o buffer de input
void clear_input_buffer(void) {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
  char estado1 = 'A';
  char estado2 = 'A';
  char codigoCarta1[3] = "A01";
  char codigoCarta2[3] = "A01";
  char nomeCidade1[20] = "Cidade";
  char nomeCidade2[20] = "Cidade";
  int populacao1 = 0, populacao2 = 0;
  float area1 = 0, area2 = 0;
  float pib1 = 0, pib2 = 0;
  int numPontosTuristicos1 = 0, numPontosTuristicos2 = 0;

  printf("Iniciando cadastro de cartas...\n\n");
  printf("Cadastro da carta 1...\n");

  printf("Insira o estado da carta (uma letra de A a H): ");
  scanf("%c", &estado1);
  clear_input_buffer();

  printf("\nInsira o código da carta (letra do estado + numero. Ex: A02): ");
  fgets(codigoCarta1, 4, stdin);
  codigoCarta1[strcspn(codigoCarta1, "\n")] = 0;
  clear_input_buffer();

  printf("\nInsira o nome da cidade: ");
  fgets(nomeCidade1, 20, stdin);
  nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
  clear_input_buffer();

  printf("\nInsira a populacao da cidade: ");
  scanf("%i", &populacao1);
  clear_input_buffer();

  printf("\nInsira a área da cidade: ");
  scanf("%f", &area1);
  clear_input_buffer();

  printf("\nInsira o PIB da cidade: ");
  scanf("%f", &pib1);
  clear_input_buffer();

  printf("\nInsira o número de pontos turísticos da cidade: ");
  scanf("%i", &numPontosTuristicos1);
  clear_input_buffer();

  printf("\n\nCarta 1 cadastrada.\n\nIniciando cadastro da carta 2...\n");

  printf("Insira o estado da carta (uma letra de A a H): ");
  scanf("%c", &estado2);
  clear_input_buffer();

  printf("\nInsira o código da carta (letra do estado + numero. Ex: A02): ");
  fgets(codigoCarta2, 4, stdin);
  codigoCarta2[strcspn(codigoCarta2, "\n")] = 0;
  clear_input_buffer();

  printf("\nInsira o nome da cidade: ");
  fgets(nomeCidade2, 20, stdin);
  nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
  clear_input_buffer();

  printf("\nInsira a populacao da cidade: ");
  scanf("%i", &populacao2);
  clear_input_buffer();

  printf("\nInsira a área da cidade: ");
  scanf("%f", &area2);
  clear_input_buffer();

  printf("\nInsira o PIB da cidade: ");
  scanf("%f", &pib2);
  clear_input_buffer();

  printf("\nInsira o número de pontos turísticos da cidade: ");
  scanf("%i", &numPontosTuristicos2);
  clear_input_buffer();

  printf("\n\nCadastro de cartas finalizado.\nAs cartas cadastradas foram:");
  
  printf("\n\nCarta1\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %i\nÁrea: %.2f km quadrados\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %i",
         estado1, codigoCarta1, nomeCidade1, populacao1, area1, pib1, numPontosTuristicos1);
  printf("\n\nCarta2\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %i\nÁrea: %.2f km quadrados\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %i",
         estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, numPontosTuristicos2);


  return 0;
}
