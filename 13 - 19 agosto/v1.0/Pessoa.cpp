#include "Pessoa.h"
#include <string.h>
#include <iostream>

using namespace std;

Pessoa::Pessoa(int diap, int mesp, int anop, char nomep[20])
{
    dia = diap;
    mes = mesp;
    ano = anop;
    idade = -1;
    nome = nomep;
}

void Pessoa::Calc_idade(int diaf, int mesf, int anof)
{
    idade = anof - ano;

    if(mes < mesf)
        idade = idade - 1;
    else
    {
        if(mes == mesf)
            if(dia > diaf)
                idade = idade -1;
    }
}

void Pessoa::printIdade()
{
    cout << "A idade de " << nome << " seria " << idade << endl;
}
