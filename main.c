//#include <stdio.h>
#include <locale.h> //Include para possibilitar o uso de acentua��o
#include "header.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Switch em cima do retorno da fun��o do menu, que retorna a entrada do usu�rio direcionando-o para o respectivo menu
    switch(menuPrincipal())
    {
        case 1: //Cl�ssico
            break;
        case 2: //F�cil
            break;
        case 3: //Personalizado
            break;
        case 4: //Rank
            break;
    }

    return 0;
}
