#include <stdio.h>


int main(){

    //CARTA 1
    char cidade[50];
    char estado;
    char codigo[50];
    int populacao, pontoturistico;
    float area, pib;

    //CARTA 2

    char cidade2[50];
    char estado2;
    char codigo2[50];
    int populacao2, pontoturistico2;
    float area2, pib2;




     //primeira carta 1
     printf("Carta 1\n");

     //estado
     printf("Estado: \n");
     scanf(" %c", &estado);

     //código da cidade
     printf("Código: \n");
     scanf("%s", codigo);

     //nome da cidade
     printf("Nome da Cidade: \n");
     scanf("%s", cidade);
     
     //tamanho da população
     printf("População: \n");
     scanf("%i", &populacao);

     //Área da cidade
     printf("Área: \n");
     scanf(" %f", &area);

     //PIB da cidade
     printf("PIB: \n");
     scanf("%f", &pib);
     
     //ponto turistico
     printf("Número de Pontos Turísticos: \n");
     scanf("%i", &pontoturistico);

     //printar a carta 1
     printf("\nCarta 1\n");
     printf("Estado: %c\n", estado);
     printf("Código: %s\n", codigo);
     printf("Nome da Cidade: %s\n", cidade);
     printf("População: %i, Área: %.2f\n", populacao, area);
     printf("PIB: %.2f, Número de pontos Turísticos: %i\n", pib, pontoturistico);
     



    //CARTA 2



     printf("Carta 2\n");

     //estado
     printf("Estado: \n");
     scanf(" %c", &estado2);

     //código da cidade
     printf("Código: \n");
     scanf("%s", codigo2);

     //nome da cidade
     printf("Nome da Cidade: \n");
     scanf("%s", cidade2);
     
     //tamanho da população
     printf("População: \n");
     scanf("%i", &populacao2);

     //Área da cidade
     printf("Área: \n");
     scanf(" %f", &area2);

     //PIB da cidade
     printf("PIB: \n");
     scanf("%f", &pib2);
     
     //ponto turistico
     printf("Número de Pontos Turísticos: \n");
     scanf("%i", &pontoturistico2);

     //printar a carta 2
     printf("\nCarta 2\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("População: %i, Área: %.2f\n", populacao2, area2);
     printf("PIB: %.2f, Número de pontos Turísticos: %i\n", pib2, pontoturistico2);






     /*
     Carta 1:

     Estado: A Tipo: char

     Código: A01  char[] (um array de caracteres, ou string)

     Nome da Cidade: São Paulo Tipo: char[] (string)

     População: 12325000 Tipo: int

     Área: 1521.11 km² Tipo: float

     PIB: 699.28 bilhões de reais Tipo: float

     Número de Pontos Turísticos: 50 Tipo: int
                
     */
    return 0;
}