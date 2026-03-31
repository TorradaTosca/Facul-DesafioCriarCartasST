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
  char codigoCarta1[4] = "A01";
  char codigoCarta2[4] = "A01";
  char nomeCidade1[20] = "Cidade";
  char nomeCidade2[20] = "Cidade";
  unsigned long int populacao1 = 0, populacao2 = 0;
  float area1 = 0, area2 = 0;
  float pib1 = 0, pib2 = 0;
  int numPontosTuristicos1 = 0, numPontosTuristicos2 = 0;
  float densidPopulacional1 = 0, densidPopulacional2 = 0;
  float pibCapta1 = 0, pibCapta2 = 0;
  float superPoder1, superPoder2;

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
  scanf("%lu", &populacao1);
  clear_input_buffer();

  printf("\nInsira a área da cidade: ");
  scanf("%f", &area1);
  clear_input_buffer();

  printf("\nInsira o PIB da cidade (em bilhoes): ");
  scanf("%f", &pib1);
  clear_input_buffer();

  printf("\nInsira o número de pontos turísticos da cidade: ");
  scanf("%i", &numPontosTuristicos1);
  clear_input_buffer();

  //Calculos das proximas propriedades da carta
  densidPopulacional1 = (float) populacao1 / area1;
  pibCapta1 = (pib1 * 1000000000.0) / ((float) populacao1);
  superPoder1 = ((float) populacao1) + area1 + pib1 + numPontosTuristicos1 + (1/densidPopulacional1) + pibCapta1;

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
  scanf("%lu", &populacao2);
  clear_input_buffer();

  printf("\nInsira a área da cidade: ");
  scanf("%f", &area2);
  clear_input_buffer();

  printf("\nInsira o PIB da cidade (em bilhoes): ");
  scanf("%f", &pib2);
  clear_input_buffer();

  printf("\nInsira o número de pontos turísticos da cidade: ");
  scanf("%i", &numPontosTuristicos2);
  clear_input_buffer();

  //Calculos das proximas propriedades da carta
  densidPopulacional2 = (float) populacao2 / area2;
  pibCapta2 = (pib2 * 1000000000) / ((float) populacao2);
  superPoder2 = ((float) populacao2) + area2 + pib2 + numPontosTuristicos2 + (1/densidPopulacional2) + pibCapta2;

  printf("\n\nCadastro de cartas finalizado.\nAs cartas cadastradas foram:");
  
  printf("\n\nCarta1\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %i\nÁrea: %.2f km quadrados\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %i\nDensidade populacional: %.2f hab/km\nPIB per capta: %.2f reais",
         estado1, codigoCarta1, nomeCidade1, populacao1, area1, pib1, numPontosTuristicos1, densidPopulacional1, pibCapta1);
  printf("\n\nCarta2\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %i\nÁrea: %.2f km quadrados\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %i\nDensidade populacional: %.2f hab/km\nPIB per capta: %.2f reais",
         estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, numPontosTuristicos2, densidPopulacional2, pibCapta2);

  //Comparacao das cartas
  printf("\n\nComparação das cartas:\n");

  int comparacaoPopulacao = populacao1 > populacao2;
  int comparacaoArea = area1 > area2;
  int comparacaoPib = pib1 > pib2;
  int comparacaoNumPtsTuris = numPontosTuristicos1 > numPontosTuristicos2;
  int comparacaoDensPopul = densidPopulacional1 < densidPopulacional2;
  int comparacaoPibCapta = pibCapta1 > pibCapta2;
  int comparacaoSuperPoder = superPoder1 > superPoder2;

  printf("\nPopulação: Carta %i venceu - %i", 2 - comparacaoPopulacao, comparacaoPopulacao);
  printf("\nArea: Carta %i venceu - %i", 2 - comparacaoArea, comparacaoArea);
  printf("\nPIB: Carta %i venceu - %i", 2 - comparacaoPib, comparacaoPib);
  printf("\nNúmero de pontos turísticos: Carta %i venceu - %i", 2 - comparacaoNumPtsTuris, comparacaoNumPtsTuris);
  printf("\nDensidade populacional: Carta %i venceu - %i", 2 - comparacaoDensPopul, comparacaoDensPopul);
  printf("\nPIB per capta: Carta %i venceu - %i", 2 - comparacaoPibCapta, comparacaoPibCapta);
  printf("\nSuper poder: Carta %i venceu - %i", 2 - comparacaoSuperPoder, comparacaoSuperPoder);

  //Comparacao de jogo
  printf("\n\nEscolha um atributo para comparar:");
  printf("\n(1) População\n(2) Area\n(3) PIB\n(4) Número de pontos turísticos\n(5) DensidadePopulacional\n(6) PIB per capta\n(7) Super poder\n");

  int escolha = -1;
  scanf("%i", &escolha);

  switch (escolha) {
    case 1:
      printf("\n\nCarta 1: %lu", populacao1);
      printf("\nCarta 2: %lu", populacao2);
      printf("\nResultado: ");

      if (comparacaoPopulacao) {
        printf("Carta 1 (%s) venceu!", nomeCidade1);
      }
      else {
        printf("Carta 2 (%s) venceu!", nomeCidade2);
      }
    break;

    case 2:
      printf("\n\nCarta 1: %.2f", area1);
      printf("\nCarta 2: %.2f", area2);
      printf("\nResultado: ");

      if (comparacaoArea) {
        printf("Carta 1 (%s) venceu!", nomeCidade1);
      }
      else {
        printf("Carta 2 (%s) venceu!", nomeCidade2);
      }
    break;

    case 3:
      printf("\n\nCarta 1: %.2f", pib1);
      printf("\nCarta 2: %.2f", pib2);
      printf("\nResultado: ");

      if (comparacaoPib) {
        printf("Carta 1 (%s) venceu!", nomeCidade1);
      }
      else {
        printf("Carta 2 (%s) venceu!", nomeCidade2);
      }
    break;

    case 4:
      printf("\n\nCarta 1: %i", numPontosTuristicos1);
      printf("\nCarta 2: %i", numPontosTuristicos2);
      printf("\nResultado: ");

      if (comparacaoNumPtsTuris) {
        printf("Carta 1 (%s) venceu!", nomeCidade1);
      }
      else {
        printf("Carta 2 (%s) venceu!", nomeCidade2);
      }
    break;

    case 5:
      printf("\n\nCarta 1: %.2f", densidPopulacional1);
      printf("\nCarta 2: %.2f", densidPopulacional2);
      printf("\nResultado: ");

      if (comparacaoDensPopul) {
        printf("Carta 1 (%s) venceu!", nomeCidade1);
      }
      else {
        printf("Carta 2 (%s) venceu!", nomeCidade2);
      }
    break;

    case 6:
      printf("\n\nCarta 1: %.2f", pibCapta1);
      printf("\nCarta 2: %.2f", pibCapta2);
      printf("\nResultado: ");

      if (comparacaoPibCapta) {
        printf("Carta 1 (%s) venceu!", nomeCidade1);
      }
      else {
        printf("Carta 2 (%s) venceu!", nomeCidade2);
      }
    break;

    case 7:
      printf("\n\nCarta 1: %.2f", superPoder1);
      printf("\nCarta 2: %.2f", superPoder2);
      printf("\nResultado: ");

      if (comparacaoSuperPoder) {
        printf("Carta 1 (%s) venceu!", nomeCidade1);
      }
      else {
        printf("Carta 2 (%s) venceu!", nomeCidade2);
      }
    break;

    default:
      printf("Opção inválida...");
  }

  return 0;
}
