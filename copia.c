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
   