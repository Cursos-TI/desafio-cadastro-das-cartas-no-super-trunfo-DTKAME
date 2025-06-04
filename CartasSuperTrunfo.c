#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
int main(){

    //CARTA 1
    char cidade[50];
    char estado;
    char codigo[50];
    int populacao, pontoturistico;
    float area, pib;
    float densidade, pibc1;
    float Superpoder;
    //CARTA 2

    char cidade2[50];
    char estado2;
    char codigo2[50];
    int populacao2, pontoturistico2;
    float area2, pib2;
    float densidade2, pibc2;
    float Superpoder2;


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
     printf("Carta 1\n");
     printf("Estado: %c\n", estado);
     printf("Código: %s\n", codigo);
     printf("Nome da Cidade: %s\n", cidade);
     printf("População: %i\n", populacao);
     printf("Área: %.2f Km\n", area);
     printf("PIB: %.2f\n", pib);
     printf("Número de pontos Turísticos: %i\n", pontoturistico);

     densidade = (float)populacao / area;
     printf("Densidade Populacional %.2f\n", densidade);

     pibc1 = (float)(pib + populacao) / 2;
     printf("PIB per capita %.2f\n", pibc1);





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

     printf("Carta 2\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("População: %i\n", populacao2);
     printf("Área: %.2f Km\n", area2);
     printf("PIB: %.2f\n", pib2);
     printf("Número de pontos Turísticos: %i\n", pontoturistico2);

     densidade2 = (float)populacao2 / area2;
     printf("Densidade Populacional %.2f\n", densidade2);

     pibc2 = (float)(pib2 + populacao2) / 2;
     printf("PIB per capita %.2f\n", pibc2);





   //comparações das cartas 1 e 2//
        

    

    Superpoder = populacao + area + pib + pibc1 + (1.0 / densidade) + pontoturistico;

    Superpoder2 = populacao2 + area2 + pib2 + pibc2 + (1.0 / densidade2) + pontoturistico2;



     printf("comparação de cartas:\n");
     printf("População: %d\n", populacao > populacao2);
     printf("Área: %d\n", area > area2);
     printf("PIB: %d\n", pib > pib2);
     printf("População: %d\n", pontoturistico > pontoturistico2);
     printf("Densidade Populacional: %d\n", densidade < densidade2);
     printf("PIB per Capita: %d\n", pibc1 > pibc2);
     printf("Super Poder: %d\n", Superpoder > Superpoder2);



     





    return 0;
}
