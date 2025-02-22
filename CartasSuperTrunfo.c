// Desafio novado, jogo super trunfo, aluno: Luan Victor Ribeiro De Souza

#include <stdio.h>

int main() {

    //Variaveis da carta 1 e carta 2

    char estado1[10], estado2[10];
    char codigo1[4], codigo2[4];
    char nomeCidade1[10], nomeCidade2[10];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    //carta 01
    
    printf("\ncarta01:\n");

    printf("Digite o estado:");
    scanf(" %s", &estado1);

    printf("Digite o código da carta:  ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade1);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    //carta 02
    
    printf("\ncarta02:\n");

    printf(" Digite o estado: ");
    scanf(" %s", &estado2);

    printf("Digite o código da carta : ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);
    
    //Dados da carta 01 (imprime os dados requisitados da carta 01)

    printf("\nDados da carta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    
    //Dados da carta 02 (imprime os dados requisitados da carta 02)

    printf("\nDados da carta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
    
}
