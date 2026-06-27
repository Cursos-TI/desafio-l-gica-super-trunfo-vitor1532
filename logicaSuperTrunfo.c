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
  int firstTuristPoints, secondTuristPoints, firstOption, secondOption, firstPoints = 0, secondPoints = 0;
  unsigned long int firstPopulation, secondPopulation, firstSum, secondSum;
  unsigned long int  firstAttribute1  = 0, firstAttribute2 = 0, secondAttribute1 = 0, secondAttribute2 = 0;
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
  printf("Parabéns! Suas cartas foram criadas com sucesso!\n\n\n");

  
  // Comparação de Cartas:
  // Desenvolva a lógica de comparação entre duas cartas.
  // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
  // Área para exibição do Super Trunfo
  printf("Comparação de Cartas:\n\n\n");
  printf("Selecione uma opção de comparação:\n");
  printf("1. Dados das cartas (usado apenas para exibição)\n");
  printf("2. População\n");
  printf("3. Área\n");
  printf("4. PIB\n");
  printf("5. Pontos Turísticos\n");
  printf("6. Densidade Populacional\n\n");
  printf("Digite o número da opção desejada: \n");
  scanf("%d", &firstOption);

  switch (firstOption) {
    case 1:
      printf("Dados das cartas selecionados (usado apenas para exibição)\n");
      printf("Seguem as informações de cada carta:\n Carta 1:\n Estado: %c\n Código: %s\n Nome da Cidade: %s População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Númnero de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per capta: %.2f reais\n\n\n Carta 2:\n Estado: %c\n Código: %s\n Nome da Cidade: %s População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Númnero de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per capta: %.2f reais\n\n\n", firstState, firstCard, firstCity, firstPopulation, firstArea, firstPIB, firstTuristPoints, firstDensity, firstPIBPerCapita, secondState, secondCard, secondCity, secondPopulation, secondArea, secondPIB, secondTuristPoints, secondDensity, secondPIBPerCapita);
      break;
    case 2:
      firstAttribute1 = firstPopulation;
      secondAttribute1 = secondPopulation;
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: População\n");
      printf("População de %s: %lu\n", firstCity, firstPopulation);
      printf("População de %s: %lu\n", secondCity, secondPopulation);

      if (firstPopulation > secondPopulation) {
        firstPoints+=1;
        printf("Carta 1 venceu neste atributo!\n");
      } else if (firstPopulation < secondPopulation) {
        secondPoints+=1;
        printf("Carta 2 venceu neste atributo!\n");
      } else {
        printf("Empate!\n");
      }
      break;
    case 3:
      firstAttribute1 = firstArea;
      secondAttribute1 = secondArea;
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: Área\n");
      printf("Área de %s: %.2f km²\n", firstCity, firstArea);
      printf("Área de %s: %.2f km²\n", secondCity, secondArea);
      if (firstArea > secondArea) {
        firstPoints+=1;
        printf("Carta 1 venceu neste atributo!\n");
      } else if (firstArea < secondArea) {
        secondPoints+=1;
        printf("Carta 2 venceu neste atributo!\n");
      } else {
        printf("Empate!\n");
      }

      break;
    case 4:
      firstAttribute1 = firstPIB;
      secondAttribute1 = secondPIB;
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: PIB\n");
      printf("PIB de %s: %.2f bilhões de reais\n", firstCity, firstPIB);
      printf("PIB de %s: %.2f bilhões de reais\n", secondCity, secondPIB);
      if (firstPIB > secondPIB) {
        firstPoints+=1;
        printf("Carta 1 venceu neste atributo!\n");
      } else if (firstPIB < secondPIB) {
        secondPoints+=1;
        printf("Carta 2 venceu neste atributo!\n");
      } else {
        printf("Empate!\n");
      }
      break;
    case 5:
      firstAttribute1 = firstTuristPoints;
      secondAttribute1 = secondTuristPoints;
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: Pontos Turísticos\n");
      printf("Pontos Turísticos de %s: %d\n", firstCity, firstTuristPoints);
      printf("Pontos Turísticos de %s: %d\n", secondCity, secondTuristPoints);
      if (firstTuristPoints > secondTuristPoints) {
        firstPoints+=1;
        printf("Carta 1 venceu neste atributo!\n");
      } else if (firstTuristPoints < secondTuristPoints) {
        secondPoints+=1;
        printf("Carta 2 venceu neste atributo!\n");
      } else {
        printf("Empate!\n");
      }
      break;
    case 6:
      firstAttribute1 = firstDensity;
      secondAttribute1 = secondDensity;
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: Densidade Populacional\n");
      printf("Densidade Populacional de %s: %.2f hab/km²\n", firstCity, firstDensity);
      printf("Densidade Populacional de %s: %.2f hab/km²\n", secondCity, secondDensity);
      if (firstDensity < secondDensity) {
        firstPoints+=1;
        printf("Carta 1 venceu neste atributo!\n");
      } else if (firstDensity > secondDensity) {
        secondPoints+=1;
        printf("Carta 2 venceu neste atributo!\n");
      } else {
        printf("Empate!\n");
      }
      break;
    default:
      printf("Opção inválida. Por favor, selecione uma opção válida.\n");
      break;
  }


  printf("Comparação de Cartas:\n\n\n");
  printf("Selecione uma opção de comparação:\n");
  firstOption == 1 ? 0 : printf("1. Dados das cartas (usado apenas para exibição)\n");
  firstOption == 2 ? 0 : printf("2. População\n");
  firstOption == 3 ? 0 : printf("3. Área\n");
  firstOption == 4 ? 0 : printf("4. PIB\n");
  firstOption == 5 ? 0 : printf("5. Pontos Turísticos\n");
  firstOption == 6 ? 0 : printf("6. Densidade Populacional\n\n");
  printf("Digite o número da opção desejada: \n");
  scanf("%d", &secondOption);

  switch (secondOption) {
    case 1:
      if (firstOption == 1) {
        printf("Opção inválida. Por favor, selecione uma opção válida.\n");
        break;
      }
      printf("Dados das cartas selecionados (usado apenas para exibição)\n");
      printf("Seguem as informações de cada carta:\n Carta 1:\n Estado: %c\n Código: %s\n Nome da Cidade: %s População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Númnero de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per capta: %.2f reais\n\n\n Carta 2:\n Estado: %c\n Código: %s\n Nome da Cidade: %s População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Númnero de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per capta: %.2f reais\n\n\n", firstState, firstCard, firstCity, firstPopulation, firstArea, firstPIB, firstTuristPoints, firstDensity, firstPIBPerCapita, secondState, secondCard, secondCity, secondPopulation, secondArea, secondPIB, secondTuristPoints, secondDensity, secondPIBPerCapita);
      break;
    case 2:
      if (firstOption == 2) {
        printf("Opção inválida. Por favor, selecione uma opção válida.\n");
        break;
      }
      firstAttribute2 = firstPopulation;
      secondAttribute2 = secondPopulation;
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: População\n");
      printf("População de %s: %lu\n", firstCity, firstPopulation);
      printf("População de %s: %lu\n", secondCity, secondPopulation);
      if (firstPopulation > secondPopulation) {
        firstPoints+=1;
        printf("Carta 1 venceu neste atributo!\n");
      } else if (firstPopulation < secondPopulation) {
        secondPoints+=1;
        printf("Carta 2 venceu neste atributo!\n");
      } else {
        printf("Empate!\n");
      }
      break;
    case 3:
      if (firstOption == 3) {
        printf("Opção inválida. Por favor, selecione uma opção válida.\n");
        break;
      }
      firstAttribute2 = firstArea;
      secondAttribute2 = secondArea;
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: Área\n");
      printf("Área de %s: %.2f km²\n", firstCity, firstArea);
      printf("Área de %s: %.2f km²\n", secondCity, secondArea);
      if (firstArea > secondArea) {
        firstPoints+=1;
        printf("Carta 1 venceu neste atributo!\n");
      } else if (firstArea < secondArea) {
        secondPoints+=1;
        printf("Carta 2 venceu neste atributo!\n");
      } else {
        printf("Empate!\n");
      }
      break;
    case 4:
      if (firstOption == 4) {
        printf("Opção inválida. Por favor, selecione uma opção válida.\n");
        break;
      }
      firstAttribute2 = firstPIB;
      secondAttribute2 = secondPIB;
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: PIB\n");
      printf("PIB de %s: %.2f\n", firstCity, firstPIB);
      printf("PIB de %s: %.2f\n", secondCity, secondPIB);
      if (firstPIB > secondPIB) {
        firstPoints+=1;
        printf("Carta 1 venceu neste atributo!\n");
      } else if (firstPIB < secondPIB) {
        secondPoints+=1;
        printf("Carta 2 venceu neste atributo!\n");
      } else {
        printf("Empate!\n");
      }
      break;
    case 5:
      if (firstOption == 5) {
        printf("Opção inválida. Por favor, selecione uma opção válida.\n");
        break;
      }
      firstAttribute2 = firstTuristPoints;
      secondAttribute2 = secondTuristPoints;
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: Pontos Turísticos\n");
      printf("Pontos Turísticos de %s: %lu\n", firstCity, firstTuristPoints);
      printf("Pontos Turísticos de %s: %lu\n", secondCity, secondTuristPoints);
      if (firstTuristPoints > secondTuristPoints) {
        firstPoints+=1;
        printf("Carta 1 venceu neste atributo!\n");
      } else if (firstTuristPoints < secondTuristPoints) {
        secondPoints+=1;
        printf("Carta 2 venceu neste atributo!\n");
      } else {
        printf("Empate!\n");
      }
      break;
    case 6:
      if (firstOption == 6) {
        printf("Opção inválida. Por favor, selecione uma opção válida.\n");
        break;
      }
      firstAttribute2 = firstDensity;
      secondAttribute2 = secondDensity;
      printf("Carta 1: %s\n", firstCity);
      printf("Carta 2: %s\n", secondCity);
      printf("Atributo selecionado: Densidade Demográfica\n");
      printf("Densidade Demográfica de %s: %.2f hab/km²\n", firstCity, firstDensity);
      printf("Densidade Demográfica de %s: %.2f hab/km²\n", secondCity, secondDensity);
      if (firstDensity < secondDensity) {
        firstPoints+=1;
        printf("Carta 1 venceu neste atributo!\n");
      } else if (firstDensity > secondDensity) {
        secondPoints+=1;
        printf("Carta 2 venceu neste atributo!\n");
      } else {
        printf("Empate!\n");
      }
      break;
    default:
      printf("Opção inválida. Por favor, selecione uma opção válida.\n");
      break;
  }

  firstSum = firstAttribute1 + firstAttribute2;
  secondSum = secondAttribute1 + secondAttribute2;

  printf("Soma dos valores de cada carta:\n");
  printf("Carta 1: %lu\n", firstSum);
  printf("Carta 2: %lu\n", secondSum);
  if (firstSum > secondSum) {
    printf("Carta 1 venceu na soma!\n");
    firstPoints+=1;
  } else if (firstSum < secondSum) {
    printf("Carta 2 venceu na soma!\n");
    secondPoints+=1;
  } else {
    printf("Empate na soma!\n");
  }

  if (firstPoints > secondPoints) {
    printf("Carta 1 venceu o jogo! (Carta 1 = %d pontos x Carta 2 = %d pontos)\n", firstPoints, secondPoints);
  } else if (firstPoints < secondPoints) {
    printf("Carta 2 venceu o jogo! (Carta 2 = %d pontos x Carta 1 = %d pontos)\n", secondPoints, firstPoints);
  } else {
    printf("Empate no jogo! (Carta 1 = %d pontos x Carta 2 = %d pontos)\n", firstPoints, secondPoints);
  }

  return 0;
}
