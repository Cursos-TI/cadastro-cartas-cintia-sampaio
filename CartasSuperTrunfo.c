
// Desafio Super Trunfo - Países
// nivel: Aventureiro


#include <stdio.h>

int main()
{ //Declarando carta 1 e carta 2
  char estado1, estado2;
  char codigo_da_carta1[10], codigo_da_carta2[10];
  char nome_cidade1[30], nome_cidade2[30];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos_turisticos1, pontos_turisticos2;
  float densidade_populacional1, densidade_populacional2;
  float pib_capita1, pib_capita2;
  float super_poder1, super_poder2;
  

//Entrada carta 1
    printf ("Carta 1\n");
    printf("Escreva uma letra de A a H: \n");
    scanf(" %c", &estado1);
    
    printf("escreva o codigo da Carta:(ex:A01) \n");
    scanf("%s", codigo_da_carta1);
    
    printf("Escreva o nome da cidade: \n");
    scanf("%s", nome_cidade1);
    
    printf("Escreva o numero de habitantes da cidade: \n");
    scanf("%lu", &populacao1);
    
    printf("Escreva a area da cidade em km²: \n");
    scanf("%f", &area1);
    
    printf("Escreva o PIB da cidade: \n");
    scanf("%f", &pib1);
    
    printf("Escreva a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos_turisticos1);
    printf("\n");
    
    //Entrada carta 2
    printf ("Carta 2\n");
    printf("Escreva uma letra de A a H: \n");
    scanf(" %c", &estado2);
    
    printf("escreva o codigo da Carta::(ex:B02) \n");
    scanf("%s", codigo_da_carta2);
    
    printf("Escreva o nome da cidade: \n");
    scanf("%s", nome_cidade2);
    
    printf("Escreva o numero de habitantes da cidade: \n");
    scanf("%lu", &populacao2);
    
    printf("Escreva a area da cidade em km²: \n");
    scanf("%f", &area2);
    
    printf("Escreva o PIB da cidade: \n");
    scanf("%f", &pib2);
    
    printf("Escreva a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos_turisticos2);
    
    //calculos
  densidade_populacional1 = populacao1 / area1;
  densidade_populacional2 = populacao2 / area2;
  pib_capita1 = pib1 / populacao1;
  pib_capita2 = pib2 / populacao2;
  
  //Super poder 
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_capita1 +
  (1.0f / densidade_populacional1);
    
  super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_capita2 +
  (1.0f / densidade_populacional2);
  
  
   
    //Impressão carta 1 
    printf("\n");
    printf("Carta 1\n");
    printf("Estado:%c\n",estado1);
    printf("Codigo da carta:%s\n",codigo_da_carta1);
    printf("Nome da Cidade:%s\n",nome_cidade1);
    printf("População:%lu\n",populacao1);
    printf("Área:%.2f\n",area1);
    printf("PIB:%.2f\n",pib1);
    printf("Números de Pontos Turísticos:%d\n",pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n",pib_capita1);
    
     //Impressão carta 2  
    printf("\n");
    printf("Carta 2\n");
    printf("Estado:%c\n",estado2);
    printf("Codigo da carta:%s\n",codigo_da_carta2);
    printf("Nome da Cidade:%s\n",nome_cidade2);
    printf("População:%lu\n",populacao2);
    printf("Área:%.2f\n",area2);
    printf("PIB:%.2f\n",pib2);
    printf("Números de Pontos Turísticos:%d\n",pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n",pib_capita2);
    
    
    //Comparação de Cartas
     printf("\n");
     
     
printf("\n=== Comparação de Cartas ===\n");

// População
printf("População: %s (%d)\n",
       (populacao1 > populacao2) ? "Carta 1 venceu" : "Carta 2 venceu",
       (populacao1 > populacao2));

// Área
printf("Área: %s (%d)\n",
       (area1 > area2) ? "Carta 1 venceu" : "Carta 2 venceu",
       (area1 > area2));

// PIB
printf("PIB: %s (%d)\n",
       (pib1 > pib2) ? "Carta 1 venceu" : "Carta 2 venceu",
       (pib1 > pib2));

// Pontos Turísticos
printf("Pontos Turísticos: %s (%d)\n",
       (pontos_turisticos1 > pontos_turisticos2) ? "Carta 1 venceu" : "Carta 2 venceu",
       (pontos_turisticos1 > pontos_turisticos2));

// Densidade Populacional (menor vence)
printf("Densidade Populacional: %s (%d)\n",
       (densidade_populacional1 < densidade_populacional2) ? "Carta 1 venceu" : "Carta 2 venceu",
       (densidade_populacional1 < densidade_populacional2));

// PIB per Capita
printf("PIB per Capita: %s (%d)\n",
       (pib_capita1 > pib_capita2) ? "Carta 1 venceu" : "Carta 2 venceu",
       (pib_capita1 > pib_capita2));

// Super Poder
printf("Super Poder: %s (%d)\n",
       (super_poder1 > super_poder2) ? "Carta 1 venceu" : "Carta 2 venceu",
       (super_poder1 > super_poder2));

     
     
    
    return 0;
}   