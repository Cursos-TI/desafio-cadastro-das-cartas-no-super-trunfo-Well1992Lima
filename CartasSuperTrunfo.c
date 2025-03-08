#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo Países: \n");
  
    char estado[10], cidade[20], codigo[10];
    int population, pontos;
    float area, PIB;
 

    printf("Carta 1 \n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo da carta de 'A' a 'H' e  um número de '01' a '04': \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);

    
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &population);

    printf("digite a area da cidade em Km²: \n");
    scanf("%f Km²", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f Bi", &PIB);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &pontos);



    printf("carta 1 \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", population);
    printf("Área: %f Km²\n", area);
    printf("PIB: %f Bi\n", PIB);
    printf("Pontos turísticos: %d\n", pontos);



    printf("Carta 2 \n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo da carta de 'A' a 'H' e um número de '01' a '04': \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &population);

    printf("digite a area da cidade em Km²: \n");
    scanf("%f Km²", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f Bi", &PIB);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &pontos);



    printf("carta 2 \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", population);
    printf("Área: %f Km²\n", area);
    printf("PIB: %f Bi\n", PIB);
    printf("Pontos turísticos: %d\n", pontos);


  return 0;
}