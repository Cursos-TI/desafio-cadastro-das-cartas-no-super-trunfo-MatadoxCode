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