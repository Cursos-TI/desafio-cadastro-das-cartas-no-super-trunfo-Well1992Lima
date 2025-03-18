#include <stdio.h>

int main(){

  
    char estado[10], cidade[20], codigo[10];
    int pontos, pontos2;
    float area, PIB, dpopulation, PIBperc, area2, PIB2, dpopulation2, PIBperc2, superPower, superPower2;
    unsigned long int population, population2;
    int resultado, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

    printf("Carta 1 \n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo da carta de 'A' a 'H' e  um número de '01' a '04': \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%u", &population);

    printf("digite a area da cidade em Km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &pontos);

    dpopulation = population / area;
    PIBperc = PIB / population;
    superPower =  population + area + PIB + (float)pontos + PIBperc + (dpopulation - (dpopulation * 2));
    
    printf("carta 1 \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", population);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: R$ %.2f Bi\n", PIB);
    printf("Pontos turísticos: %d\n", pontos);
    printf("A densidade populacional é: %.2f\n", dpopulation);
    printf("O PIB per capta é: R$ %.2f\n", PIBperc);
    printf("O super poder da carta 1 é: %.2f\n", superPower);

    printf("Carta 2 \n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo da carta de 'A' a 'H' e um número de '01' a '04': \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);
    
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%u", &population2);

    printf("digite a area da cidade em Km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &pontos2);

    dpopulation2 = population2 / area2;
    PIBperc2 = PIB2 / population2;
    superPower2=  population2+ area2+ PIB2+ (float)pontos2+ PIBperc2+ (dpopulation2- (dpopulation2* 2));
    
    
    printf("carta 2 \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", population2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f Bi\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("A densidade populacional é: %.2f\n", dpopulation2);
    printf("O PIB per capta é: R$ %.2f\n", PIBperc2);
        
    printf("A comparação entre as cartas 1 e 2:\n");
    resultado = population > population2;
    resultado2 = area > area;
    resultado3 = PIB > PIB2;
    resultado4 = pontos > pontos2;
    resultado5 = dpopulation > dpopulation2;
    resultado6 = PIBperc > PIBperc2;
    resultado7 = superPower >superPower2;

    printf("O valores da carta 1 são maiores do que os da carta 2 ?\n");
    printf("População: %d\n", resultado);
    printf("Area: %d\n", resultado2);
    printf("PIB: %d\n", resultado3);
    printf("Pontos Turisticas: %d\n", resultado4);
    printf("Densidade Populacional: %d\n", resultado5);
    printf("PIB Per Capta: %d\n", resultado6);
    printf("Super Poder: %d\n", resultado7);
    
    
  return 0;
}


