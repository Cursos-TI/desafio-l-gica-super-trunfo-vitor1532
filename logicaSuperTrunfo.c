#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


float calcPopDensity(int populacao, float area) {
  return (float) populacao / area;
}

float calcPIBPerCapita(float pib, int populacao) {
  return (float) (pib * 1000000000) / populacao;
}

float calcSuperPower(unsigned long int population, float area, float pib, int turisticPoints, float density, float pibPerCapita) {
  return (float) population + area + (pib * 1000000000) + turisticPoints + (1.0 /density) + pibPerCapita;
}

int main() {
  // Definição das variáveis para armazenar as propriedades das cidades
  char firstCard[4], secondCard[4], firstState, secondState, firstCity[50], secondCity[50];
  int firstTuristPoints, secondTuristPoints, option;
  unsigned long int firstPopulation, secondPopulation;
  float firstArea, secondArea, firstPIB, secondPIB, firstDensity, secondDensity, firstPIBPerCapita, secondPIBPerCapita, firstSuperPower, secondSuperPower, firstSuperPowerScore, secondSuperPowerScore;
  // Você pode utilizar o código do primeiro desafio
  
  // Cadastro das Cartas:
  // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
  // utilizando a função scanf para capturar as entradas.
  // utilize o código do primeiro desafio
  // Área para entrada de dados

  // Primeira carta
  printf("PRIMEIRA CARTA - Uma letra de 'A' a 'H' (representando um dos oito estados): \n");

  scanf(" %c", &firstState);

  printf("PRIMEIRA CARTA - Código letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
  scanf(" %s", firstCard);

  getchar(); // remove o Enter do buffer

  printf("PRIMEIRA CARTA - digite o nome da Cidade: \n");
  fgets(firstCity, 50, stdin);

  printf("PRIMEIRA CARTA - O número inteiro de habitantes da cidade (População):  \n");
  scanf(" %lu", &firstPopulation);

  printf("PRIMEIRA CARTA - A área da cidade em quilômetros quadrados:  \n");
  scanf(" %f", &firstArea);

  printf("PRIMEIRA CARTA - O Produto Interno Bruto da cidade em bilhões de reais: \n");
  scanf(" %f", &firstPIB);

  printf("PRIMEIRA CARTA - A quantidade de pontos turísticos na cidade: \n");
  scanf(" %d", &firstTuristPoints);

  printf("CARTA CADASTRADA COM SUCESSO!!! Agora vamos à segunda carta... \n");


  // Segunda carta
  printf("SEGUNDA CARTA - Uma letra de 'A' a 'H' (representando um dos oito estados): \n");

  scanf(" %c", &secondState);

  printf("SEGUNDA CARTA - Código letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
  scanf(" %s", secondCard);

  getchar(); // remove o Enter do buffer

  printf("SEGUNDA CARTA - digite o nome da Cidade: \n");
  fgets(secondCity, 50, stdin);

  printf("SEGUNDA CARTA - O número inteiro de habitantes da cidade (População):  \n");
  scanf(" %lu", &secondPopulation);

  printf("SEGUNDA CARTA - A área da cidade em quilômetros quadrados:  \n");
  scanf(" %f", &secondArea);

  printf("SEGUNDA CARTA - O Produto Interno Bruto da cidade em bilhões de reais: \n");
  scanf(" %f", &secondPIB);

  printf("SEGUNDA CARTA - A quantidade de pontos turísticos na cidade: \n");
  scanf(" %d", &secondTuristPoints);

  firstDensity = calcPopDensity(firstPopulation, firstArea);
  secondDensity = calcPopDensity(secondPopulation, secondArea);
  firstPIBPerCapita = calcPIBPerCapita(firstPIB, firstPopulation);
  secondPIBPerCapita = calcPIBPerCapita(secondPIB, secondPopulation);
  firstSuperPower = calcSuperPower(firstPopulation, firstArea, firstPIB, firstTuristPoints, firstDensity, firstPIBPerCapita);
  secondSuperPower = calcSuperPower(secondPopulation, secondArea, secondPIB, secondTuristPoints, secondDensity, secondPIBPerCapita);

  // Área para exibição dos dados da cidade
  printf("Parabéns! Suas cartas foram criadas com sucesso!\n Seguem as informações de cada carta:\n Carta 1:\n Estado: %c\n Código: %s\n Nome da Cidade: %s População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Númnero de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per capta: %.2f reais\n\n\n Carta 2:\n Estado: %c\n Código: %s\n Nome da Cidade: %s População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Númnero de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per capta: %.2f reais\n\n\n", firstState, firstCard, firstCity, firstPopulation, firstArea, firstPIB, firstTuristPoints, firstDensity, firstPIBPerCapita, secondState, secondCard, secondCity, secondPopulation, secondArea, secondPIB, secondTuristPoints, secondDensity, secondPIBPerCapita);

  
  // Comparação de Cartas:
  // Desenvolva a lógica de comparação entre duas cartas.
  // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
  // Área para exibição do Super Trunfo
  printf("Comparação de Cartas:\n\n\n");
  printf("Selecione uma opção de comparação:\n");
  printf("1. Nome do país (usado apenas para exibição)\n");
  printf("2. População\n");
  printf("3. Área\n");
  printf("4. PIB\n");
  printf("5. Pontos Turísticos\n");
  printf("6. Densidade Populacional\n\n");
  printf("Digite o número da opção desejada: \n");
  scanf("%d", &option);

  switch(option) {
    case 1:
      printf("País 1: %s\n", firstCity);
      printf("País 2: %s\n", secondCity);
      break;
    case 2:
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: População\n");
      printf("População de %s: %lu\n", firstCity, firstPopulation);
      printf("População de %s: %lu\n", secondCity, secondPopulation);
      
      if (firstPopulation > secondPopulation) {
        printf("Carta 1 venceu!\n");
      } else if (firstPopulation < secondPopulation) {
        printf("Carta 2 venceu!\n");
      } else {
        printf("Empate!\n");
      }

      break;
    case 3:
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: Área\n");
      printf("Área de %s: %.2f km²\n", firstCity, firstArea);
      printf("Área de %s: %.2f km²\n", secondCity, secondArea);
      if (firstArea > secondArea) {
        printf("Carta 1 venceu!\n");
      } else if (firstArea < secondArea) {
        printf("Carta 2 venceu!\n");
      } else {
        printf("Empate!\n");
      }
      break;
    case 4:
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: PIB\n");
      printf("PIB de %s: %.2f bilhões de reais\n", firstCity, firstPIB);
      printf("PIB de %s: %.2f bilhões de reais\n", secondCity, secondPIB);
      if (firstPIB > secondPIB) {
        printf("Carta 1 venceu!\n");
      } else if (firstPIB < secondPIB) {
        printf("Carta 2 venceu!\n");
      } else {
        printf("Empate!\n");
      }
      break;
    case 5:
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: Pontos Turísticos\n");
      printf("Pontos Turísticos de %s: %d\n", firstCity, firstTuristPoints);
      printf("Pontos Turísticos de %s: %d\n", secondCity, secondTuristPoints);
      if (firstTuristPoints > secondTuristPoints) {
        printf("Carta 1 venceu!\n");
      } else if (firstTuristPoints < secondTuristPoints) {
        printf("Carta 2 venceu!\n");
      } else {
        printf("Empate!\n");
      }
      break;
    case 6:
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: Densidade Populacionalwsdaaw\n");
      printf("Densidade Populacional de %s: %.2f hab/km²\n", firstCity, firstDensity);
      printf("Densidade Populacional de %s: %.2f hab/km²\n", secondCity, secondDensity);
      if (firstDensity < secondDensity) {
        printf("Carta 1 venceu!\n");
      } else if (firstDensity > secondDensity) {
        printf("Carta 2 venceu!\n");
      } else {
        printf("Empate!\n");
      }
      break;
    default:
      printf("Opção inválida. Por favor, selecione uma opção válida.\n");
      break;
  }
  return 0;
}
