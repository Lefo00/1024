//#include <stdio.h>
#include <locale.h> //Include para possibilitar o uso de acentua��o
#include "header.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");

    menuPrincipal();

    return 0;
}
