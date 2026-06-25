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
    int firstTuristPoints, secondTuristPoints;
    unsigned long int firstPopulation, secondPopulation;
    float firstArea, secondArea, firstPIB, secondPIB, firstDensity, secondDensity, firstPIBPerCapita, secondPIBPerCapita, firstSuperPower, secondSuperPower, firstSuperPowerScore, secondSuperPowerScore;
    // Você pode utilizar o código do primeiro desafio

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

  // Área para exibição do Super Trunfo
  printf("Comparação de Cartas:\n");
  printf("População: Carta %d venceu (%d)\n", firstPopulation > secondPopulation ? 1 : 2, firstPopulation > secondPopulation);
  printf("Área: Carta %d venceu (%d)\n", firstArea > secondArea ? 1 : 2, firstArea > secondArea);
  printf("PIB: Carta %d venceu (%d)\n", firstPIB > secondPIB ? 1 : 2, firstPIB > secondPIB);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", firstTuristPoints > secondTuristPoints ? 1 : 2, firstTuristPoints > secondTuristPoints);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", firstDensity < secondDensity ? 1 : 2, firstDensity < secondDensity);
  printf("PIB per capta: Carta %d venceu (%d)\n", firstPIBPerCapita > secondPIBPerCapita ? 1 : 2, firstPIBPerCapita > secondPIBPerCapita);
  printf("Super Poder: Carta %d venceu (%d)\n", firstSuperPower > secondSuperPower ? 1 : 2, firstSuperPower > secondSuperPower);


    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
