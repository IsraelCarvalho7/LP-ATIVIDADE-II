#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    
    //Variaveis...
    int opcao;
    
    
    //BACK
    
    printf("Escolha a temperatura do jogo\n");
    scanf("%d", &opcao);
    
    //Sys
    if (opcao > 25)
    {
        printf("Clima tá ensolarado\n");
    }
    if (opcao <= 25 && opcao > 14)
    {
        printf("Nublado\n");
    }
    if (opcao < 15)
    {
        printf("Está chuvendo!\n");
    }
    
    return 0;
}
