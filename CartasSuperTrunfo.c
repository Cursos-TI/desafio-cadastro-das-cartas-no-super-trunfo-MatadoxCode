#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Cadastrar a primeira carta.
int main() {
    char Estado01[20], NomedaCidade01[40];
    char CodigodaCarta01[4];
    int NumerodePontoTuristicos01;
    float Area01, Pib01, DensidadePopulacional1, PIBCapita1, superPoder1;
    unsigned long int Populacao01;

    
    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado01);

    printf("Digite o Código da Carta: \n");
    scanf("%s", CodigodaCarta01);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", NomedaCidade01);

    printf("Digite o número da população: \n");
    scanf("%lu", &Populacao01);

    printf("Digite o Aréa da cidade: \n");
    scanf("%f", &Area01);

    printf("Digite PIB do estado: \n");
    scanf("%f", &Pib01);

    printf("Digite o número de pontos turísticos do estado: \n");
    scanf("%d", &NumerodePontoTuristicos01);

    printf("Carta cadastrada com Sucesso!\n");
    printf("\n");

    // Dividindo população por área e pib por população.
    DensidadePopulacional1 = (float) (Populacao01/Area01);
    PIBCapita1 = (float) (Pib01/Populacao01);

    superPoder1 = (Populacao01 + Area01 + Pib01 + NumerodePontoTuristicos01 + PIBCapita1+ DensidadePopulacional1);

// Cadastrar a segunda carta.
    char Estado02[40], NomedaCidade02[40];
    char CodigodaCarta02[4];
    int NumerodePontoTuristicos02;
    float Area02, Pib02,DensidadePopulacional2, PIBCapita2, superPoder2;
    unsigned long int Populacao02;


    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado02);

    printf("Digite o Código da Carta: \n");
    scanf("%s", CodigodaCarta02);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", NomedaCidade02);

    printf("Digite o número da população: \n");
    scanf("%lu", &Populacao02);

    printf("Digite a Aréa da cidade: \n");
    scanf("%f", &Area02);

    printf("Digite PIB do estado: \n");
    scanf("%f", &Pib02);

    printf("Digite o número de pontos turísticos do estado: \n");
    scanf("%d", &NumerodePontoTuristicos02);

    printf("Carta cadastrada com Sucesso!\n");
    printf("\n");

    // Dividindo população por área e pib por população.
    DensidadePopulacional2 = (float) (Populacao02/Area02);
    PIBCapita2 = (float) (Pib02/Populacao02);


    superPoder2 = (float) (Populacao02 + Area02 + Pib02 + NumerodePontoTuristicos02 + PIBCapita2+ (1/DensidadePopulacional2));

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf(" Carta 1:\n");
    printf(" Estado: %s \n", Estado01);
    printf(" Código: %s \n", CodigodaCarta01);
    printf(" Nome da Cidade: %s \n", NomedaCidade01);
    printf(" População: %lu \n", Populacao01);
    printf(" Área: %.2f km²\n", Area01);
    printf(" PIB: %.2f bilhões de reais\n", Pib01);
    printf(" Número de Pontos Turísticos: %d \n", NumerodePontoTuristicos01);
    printf(" Densidade Populacional : %.2f hab/km²\n", DensidadePopulacional1);
    printf(" PIB per Capita : %.2f reais\n", PIBCapita1);
    printf(" Super Poder: %.2f \n", superPoder1);


    printf("\n");

    printf(" Carta 2:\n");
    printf(" Estado: %s \n", Estado02);
    printf(" Código: %s \n", CodigodaCarta02);
    printf(" Nome da Cidade: %s \n", NomedaCidade02);
    printf(" População: %lu \n", Populacao02);
    printf(" Área: %.2f km²\n", Area02);
    printf(" PIB: %.2f bilhões de reais\n", Pib02);
    printf(" Número de Pontos Turísticos: %d \n", NumerodePontoTuristicos02);
    printf(" Densidade Populacional : %.2f hab/km²\n", DensidadePopulacional2); 
    printf(" PIB per Capita : %.2f reais\n", PIBCapita2);
    printf(" Super Poder: %.2f \n", superPoder2);
    printf("\n");


    // Comparação de carta.
    int comparacao01, comparacao02, resultado01, resultado02, comp_Atributo01, nomes;


    printf("### Selecione dois atributos representado por números de 1 a 5 para comparação entre Carta 1 e Carta 2: ###\n");
    
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("\n");

    printf("Escolha o primeiro atributo: ");
    scanf("%d", &comparacao01);
  

    switch (comparacao01)
    {
    case 1:
        resultado01 = Populacao01 > Populacao02? 1 : 0;
        break;
    case 2:
        resultado01 = Area01 > Area02? 1 : 0;
        break;
    case 3:
        resultado01 = Pib01 > Pib02? 1 : 0;
        break;
    case 4:
        resultado01 = NumerodePontoTuristicos01 > NumerodePontoTuristicos02? 1 : 0;
        break;
    case 5:
        resultado01 = DensidadePopulacional1 < DensidadePopulacional2? 1 : 0;
        break;
    default:
        printf("Escolheu um número diferente de 1 a 5.\n");
        break;
    }

    printf("Escolha o segundo atributo: ");
    scanf("%d", &comparacao02);

    if (comparacao01 == comparacao02)
    {
        printf("Você escolheu o mesmo atributo!");
    } else {
        switch (comparacao02)
        {
        case 1:
            resultado02 = Populacao01 > Populacao02? 1 : 0;
        break;
        case 2:
            resultado02 = Area01 > Area02? 1 : 0;
        break;
        case 3:
            resultado02 = Pib01 > Pib02? 1 : 0;
        break;
        case 4:
            resultado02 = NumerodePontoTuristicos01 > NumerodePontoTuristicos02? 1 : 0;
        break;
        case 5:
            resultado02 = DensidadePopulacional1 < DensidadePopulacional2? 1 : 0;
        break;
        default:
        printf("Escolheu um número diferente de 1 a 5.\n");
        break;
        }
    }
    
printf("\n");

// Exibição do resultado 
    printf("Nomes dos estados: %s, %s\n", Estado01, Estado02);
    comparacao01 == 1? printf("Atributo 1: População\n"): 0;
    comparacao01 == 2? printf("Atributo 1: Área\n"): 0;
    comparacao01 == 3? printf("Atributo 1: PIB\n"): 0;
    comparacao01 == 4? printf("Atributo 1: Pontos Turísticos\n"): 0;
    comparacao01 == 5? printf("Atributo 1: Densidade Populacional\n"): 0;

    comparacao02 == 1? printf("Atributo 2: População\n"): 0;
    comparacao02 == 2? printf("Atributo 2: Área\n"): 0;
    comparacao02 == 3? printf("Atributo 2: PIB\n"): 0;
    comparacao02 == 4? printf("Atributo 2: Pontos Turísticos\n"): 0;
    comparacao02 == 5? printf("Atributo 2: Densidade Populacional\n"): 0;


    if (resultado01 && resultado02)
    {
        printf("Os atributos da carta 1 venceu!\n");

    }else if (resultado01 != resultado02)
    {
        printf("Empate, cada carta ganhou um atributo!\n");
    }else
    {
        printf("Os atributos da carta 2 venceu!\n");
    }
    
    
printf("\n");   
printf("*** Fim do Jogo!!! ***\n");

    return 0;
}
