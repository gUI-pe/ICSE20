#include <iostream>
#include <stdio.h>
#include "Pessoa.h"

using namespace std;

int main()
{
    char nome[20] = "Maria Fernanda";
    
    struct Pessoa maria_Fernanda(12, 8, 2003, nome);
    
    maria_Fernanda.Calc_idade(14, 8, 2023);
    
    maria_Fernanda.printIdade();

    return 0;
}