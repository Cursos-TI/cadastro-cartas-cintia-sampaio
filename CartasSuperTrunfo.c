#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

int main()
{
      //Declaração Carta 1
      
      int populacao1;
      int pontoTuristico1;
      float pib1; 
      float area1;
      char estado1; 
      char codigo1[10];
      char cidade1[50];
      
      //Declaração Carta 2
      
      int populacao2;
      int pontoTuristico2;
      float pib2; 
      float area2;
      char estado2; 
      char codigo2[10];
      char cidade2[50];
      
      // Entrada de Dados carta 1
    
    printf("Cadastrar Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Código da Carta 1 (ex: A01): ");
    scanf(" %s", &codigo1);
    
    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Àrea: ");
    scanf("%f", &area1);
    
    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontoTuristico1);
    printf("\n"); //Pula uma linha
    
    // Entrada de Dados carta 2
    
    printf("Cadastrar Carta 2:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código da Carta 2 (ex: A01): ");
    scanf("%s", &codigo2);
    
    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Àrea: ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontoTuristico2);
    
    
    printf("\n"); //Pula uma linha antes do próximo print
    // Exibição de Dados
    
    printf("Carta1:\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Àrea: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos Turísticos: %d \n", pontoTuristico1);
    
    printf("\n"); //Pula uma linha antes do próximo print
    // Exibição de Dados
    
    printf("Carta2:\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Àrea: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos Turísticos: %d \n", pontoTuristico2);
    
    return 0;
}
