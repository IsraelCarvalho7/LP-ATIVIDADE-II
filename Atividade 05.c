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
        printf("OPÇÃO 1| INGLÊS|\n");
        printf("OPÇÃO 2| ESPANHOL|\n");
        printf("OPÇÃO 3| FRANCÊS|\n");
        
        printf("Escolha seu idioma!\n");
        scanf("%i", &opcao);
        system("CLS");
        
        //sys
        switch (opcao){
        case 1:
            printf("WELCOME!\n");
            break;
        case 2:
            printf("BIENVIENDO!\n");
            break;
        case 3:
            printf("accueillir");
            break;
        default:
            printf("Não tem essa opção!\n");
        } 
        
    } while (opcao > 3 && opcao < 1);
}
    