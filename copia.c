int compPopulacao, compArea, compPib, compPonTuristico, compDenPopulacional, compPibCapita, compSuperPoder;

    compPopulacao = Populacao01 > Populacao02;
    compArea = Area01 > Area02;
    compPib = Pib01 > Pib02;
    compPonTuristico = NumerodePontoTuristicos01 > NumerodePontoTuristicos02;
    compDenPopulacional = DensidadePopulacional1 < DensidadePopulacional2;
    compPibCapita = PIBCapita1 > PIBCapita2;
    compSuperPoder = superPoder1 > superPoder2;
    
printf("Exibindo a comparação entre a carta 1 e carta 2. Se o resultado for 1 a carta 1 ganhou se for 0 carta 2 ganhou:\n");
    printf(" População: %d \n", compPopulacao);
    printf(" Área: %d \n", compArea);
    printf(" PIB: %d \n", compPib);
    printf(" Pontos Turísticos: %d \n", compPonTuristico);
    printf(" Densidade Populacional: %d \n", compDenPopulacional);
    printf(" PIB per Capita: %d \n", compPibCapita);
    printf(" Super Poder: %d \n", compSuperPoder);



     // Comparação de carta.
    //Exibindo o resultado da comparaçõe da carta. 
    printf("Comparação de cartas (Atributo: Número de pontos turístico):\n");
   if (NumerodePontoTuristicos01 > NumerodePontoTuristicos02){
        printf("Carta 1 - %s: %d\n",Estado01, NumerodePontoTuristicos01);
        printf("Carta 2 - %s: %d\n",Estado02, NumerodePontoTuristicos02);
        printf("Resultado: Carta número 1 (%s) venceu!\n", Estado01);
        
   } 
   else{
        printf("Carta 1 - %s: %d\n",Estado01, NumerodePontoTuristicos01);
        printf("Carta 2 - %s: %d\n",Estado02, NumerodePontoTuristicos02);
        printf("Carta número 2 (%s) venceu!\n", Estado02);
   }
   

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