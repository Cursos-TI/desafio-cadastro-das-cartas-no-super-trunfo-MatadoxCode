#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Cadastrar a primeira carta.
int main() {
    char Estado01[40], NomedaCidade01[40];
    char CodigodaCarta01[4];
    int Populacao01, NumerodePontoTuristicos01;
    float Area01, Pib01;

    
    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado01);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &CodigodaCarta01);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &NomedaCidade01);

    printf("Digite o número da população: \n");
    scanf("%d", &Populacao01);

    printf("Digite o Aréa da cidade: \n");
    scanf("%f", &Area01);

    printf("Digite PIB do estado: \n");
    scanf("%f", &Pib01);

    printf("Digite o número de pontos turísticos do estado: \n");
    scanf("%d", &NumerodePontoTuristicos01);

    printf("Carta cadastrada com Sucesso!\n");
    printf("\n");

// Cadastrar a segunda carta.
    char Estado02[40], NomedaCidade02[40];
    char CodigodaCarta02[4];
    int Populacao02, NumerodePontoTuristicos02;
    float Area02, Pib02;


    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado02);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &CodigodaCarta02);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &NomedaCidade02);

    printf("Digite o número da população: \n");
    scanf("%d", &Populacao02);

    printf("Digite a Aréa da cidade: \n");
    scanf("%f", &Area02);

    printf("Digite PIB do estado: \n");
    scanf("%f", &Pib02);

    printf("Digite o número de pontos turísticos do estado: \n");
    scanf("%d", &NumerodePontoTuristicos02);

    printf("Carta cadastrada com Sucesso!\n");
    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf(" Carta 1:\n");
    printf(" Estado: %s \n", Estado01);
    printf(" Código: %s \n", CodigodaCarta01);
    printf(" Nome da Cidade: %s \n", NomedaCidade01);
    printf(" População: %d \n", Populacao01);
    printf(" Área: %.2f km²\n", Area01);
    printf(" PIB: %.2f bilhões de reais\n", Pib01);
    printf(" Número de Pontos Turísticos: %d \n", NumerodePontoTuristicos01);

    printf("\n");

    printf(" Carta 2:\n");
    printf(" Estado: %s \n", Estado02);
    printf(" Código: %s \n", CodigodaCarta02);
    printf(" Nome da Cidade: %s \n", NomedaCidade02);
    printf(" População: %d \n", Populacao02);
    printf(" Área: %.2f km²\n", Area02);
    printf(" PIB: %.2f bilhões de reais\n", Pib02);
    printf(" Número de Pontos Turísticos: %d \n", NumerodePontoTuristicos02);

    
    
    return 0;
}
