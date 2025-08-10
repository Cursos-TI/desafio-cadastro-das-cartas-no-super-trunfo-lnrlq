#include <stdio.h>

int main(){
   // Dados da Carta 1

    char estado1;
    char codigo1[6];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;

    // Dados da Carta 2
    char estado2;
    char codigo2[6];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    
    // Entrada carta 1
    
    printf("Informe os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf("%c", &estado1);

    printf("código (ex: A01):");
    scanf("%s", &codigo1);

    printf("Nome da cidade:");
    scanf(" %[^\n]", &cidade1);

    printf("População:");
    scanf("%d", &populacao1);

    printf("Área em km²:");
    scanf("%f", &area1);

    printf("Pib:");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos:");
    scanf("%d", &turisticos1);

  printf("\n");

    // Entrada carta 2
    
    printf("Informe os dados da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("código (ex: B02):");
    scanf("%s", &codigo2);

    printf("Nome da cidade:");
    scanf(" %[^\n]", &cidade2);

    printf("População:");
    scanf("%d", &populacao2);

    printf("Área em km²:");
    scanf("%f", &area2);

    printf("Pib:");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos:");
    scanf("%d", &turisticos2);


  printf("\n");


    // saida carta 1

    printf("carta 1\n");
    printf("estado: %c\n", estado1);
    printf("codigo: %s\n", codigo1);
    printf("cidade: %s\n", cidade1);
    printf("populacao: %d\n", populacao1);
    printf("area: %2.f km²\n",area1);
    printf("pib: %2.f bilhoes de reais\n",pib1);
    printf("quantidade de pontos turisticos: %d\n",turisticos1);



  printf("\n");


    // saida carta 2
    printf("carta 2\n");
    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao2);
    printf("area: %2.f km²\n",area2);
    printf("pib: %2.f bilhoes de reais\n",pib2);
    printf("quantidade de pontos turisticos: %d\n",turisticos2);

  printf("\n");

return 0;


}
