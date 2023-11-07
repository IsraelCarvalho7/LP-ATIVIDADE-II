#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
    setlocale(LC_ALL, "portuguese");
    int idade;

    printf("informe sua idade: ");
    scanf("%d", &idade);
    system ("CLS");
    
    if (idade >= 18)
    {
        printf("Acesso permitido");
    }
    else
    {
        printf("Acesso negado");
    }
}
