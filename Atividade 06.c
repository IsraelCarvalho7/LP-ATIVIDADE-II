#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
    setlocale(LC_ALL, "portuguese");
    
    int opcao;
    
    //BACK
    do
    {   
        printf("---SEJA BEM VINDO---\n");
        printf("01 | CAMISETA |\n");
        printf("02 | CALÇA |\n");
        printf("03 | SAPATO |\n");
        
        
        printf("Escolha uma das opção acima!\n");
        scanf("%i", &opcao);
        system("CLS");
      
    //sys
    switch (opcao){
        case 1:
        printf("|CAMISETA PRADA|");
        printf("-|> Apenas 999,99$!\n");
        break;
        
        case 2:
        printf("|CALÇA BALENCIAGA|");
        printf("-|> Apenas 7,000,00$!\n");
        break;
        
        case 3:
        printf("|SAPATO DA GUCCI|");
        printf("-|> Apenas 2,999,99$!\n");
        break;
        default:
        printf("Sem estoque!\n");
        } 
    } while (opcao > 3 && opcao < 1);
}