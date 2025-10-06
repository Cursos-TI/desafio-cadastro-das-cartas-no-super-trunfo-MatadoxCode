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
    //Exibindo o resultado da comparaçõe da carta. 
    int comparacao;
    printf("### Selecione qual atributo a compara da Carta 1 e Carta 2: ###\n");
    printf("1. Estado\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de Pontos Turísticos\n");
    printf("6. Densidade Populacional\n");
    printf("Atributo selecionado: ");  
    scanf("%d", &comparacao);
    printf("\n");

    switch (comparacao)
    {
    case 1:
        printf("Comparação do Estado da carta 1 com a carta 2:\n");
        printf("Nome do estado: %s\n", Estado01);
        printf("Nome do estado: %s\n", Estado02);
   break;
   case 2:
        if (Populacao01 > Populacao02){
        printf("Comparação da População da carta 1 com a carta 2:\n");
        printf("Carta 1 - %s: %lu\n",Estado01, Populacao01);
        printf("Carta 2 - %s: %lu\n",Estado02, Populacao02);
        printf("Resultado: Carta número 1 (%s) venceu!\n", Estado01);
        
    } else if(Populacao01 < Populacao02){
        printf("Comparação da População da carta 1 com a carta 2:\n");
        printf("Carta 1 - %s: %lu\n",Estado01, Populacao01);
        printf("Carta 2 - %s: %lu\n",Estado02, Populacao02);
        printf("Carta número 2 (%s) venceu!\n", Estado02);
    }else
   {
    printf("Comparação da População da carta 1 com a carta 2:\n");
    printf("Carta 1 - %s: %lu\n",Estado01, Populacao01);
    printf("Carta 2 - %s: %lu\n",Estado02, Populacao02);
    printf("Empate!\n");
   }
   break;
   case 3:
        if (Area01 > Area02){
        printf("Comparação da Área da carta 1 com a carta 2:\n");
        printf("Carta 1 - %s: %f\n",Estado01, Area01);
        printf("Carta 2 - %s: %f\n",Estado02, Area02);
        printf("Resultado: Carta número 1 (%s) venceu!\n", Estado01);
        
    } else if(Area01 < Area02){
        printf("Comparação da Área da carta 1 com a carta 2:\n");
        printf("Carta 1 - %s: %f\n",Estado01, Area01);
        printf("Carta 2 - %s: %f\n",Estado02, Area02);
        printf("Carta número 2 (%s) venceu!\n", Estado02);
    }else
   {
    printf("Comparação da Área da carta 1 com a carta 2:\n");
    printf("Carta 1 - %s: %f\n",Estado01, Area01);
    printf("Carta 2 - %s: %f\n",Estado02, Area02);
    printf("Empate!\n");
   }
   break;
   case 4:
        if (Pib01 > Pib02){
        printf("Comparação do PIB da carta 1 com a carta 2:\n");
        printf("Carta 1 - %s: %f\n",Estado01, Pib01);
        printf("Carta 2 - %s: %f\n",Estado02, Pib02);
        printf("Resultado: Carta número 1 (%s) venceu!\n", Estado01);
        
    } else if(Pib01 < Pib02){
        printf("Comparação do PIB da carta 1 com a carta 2:\n");
        printf("Carta 1 - %s: %f\n",Estado01, Pib01);
        printf("Carta 2 - %s: %f\n",Estado02, Pib02);
        printf("Carta número 2 (%s) venceu!\n", Estado02);
    }else
   {
    printf("Comparação do PIB da carta 1 com a carta 2:\n");
    printf("Carta 1 - %s: %f\n",Estado01, Pib01);
    printf("Carta 2 - %s: %f\n",Estado02, Pib02);
    printf("Empate!\n");
   }
   break;
   case 5:
        if (NumerodePontoTuristicos01 > NumerodePontoTuristicos02){
        printf("Comparação do Número de Pontos Turísticos da carta 1 com a carta 2:\n");
        printf("Carta 1 - %s: %d\n",Estado01, NumerodePontoTuristicos01);
        printf("Carta 2 - %s: %d\n",Estado02, NumerodePontoTuristicos02);
        printf("Resultado: Carta número 1 (%s) venceu!\n", Estado01);
        
    } else if(NumerodePontoTuristicos01 < NumerodePontoTuristicos02){
        printf("Comparação do Número de Pontos Turísticos da carta 1 com a carta 2:\n");
        printf("Carta 1 - %s: %d\n",Estado01, NumerodePontoTuristicos01);
        printf("Carta 2 - %s: %d\n",Estado02, NumerodePontoTuristicos02);
        printf("Carta número 2 (%s) venceu!\n", Estado02);
    }else
   {
    printf("Comparação do Número de Pontos Turísticos da carta 1 com a carta 2:\n");
    printf("Carta 1 - %s: %d\n",Estado01, NumerodePontoTuristicos01);
    printf("Carta 2 - %s: %d\n",Estado02, NumerodePontoTuristicos02);
    printf("Empate!\n");
   }
   break;
   case 6:
        if (DensidadePopulacional1 < DensidadePopulacional2){
        printf("Comparação da Densidade Populacional da carta 1 com a carta 2:\n");
        printf("Carta 1 - %s: %f\n",Estado01, DensidadePopulacional1);
        printf("Carta 2 - %s: %f\n",Estado02, DensidadePopulacional2);
        printf("Resultado: Carta número 1 (%s) venceu!\n", Estado01);
        
    } else if(DensidadePopulacional1 > DensidadePopulacional2){
        printf("Comparação da Densidade Populacional da carta 1 com a carta 2:\n");
        printf("Carta 1 - %s: %f\n",Estado01, DensidadePopulacional1);
        printf("Carta 2 - %s: %f\n",Estado02, DensidadePopulacional2);
        printf("Carta número 2 (%s) venceu!\n", Estado02);
    }else
   {
    printf("Comparação da Densidade Populacional da carta 1 com a carta 2:\n");
    printf("Carta 1 - %s: %f\n",Estado01, DensidadePopulacional1);
    printf("Carta 2 - %s: %f\n",Estado02, DensidadePopulacional2);
    printf("Empate!\n");
   }
   break;
     
    default:
        printf("Opção invalida!\n");
        break;
    }

    return 0;
}
