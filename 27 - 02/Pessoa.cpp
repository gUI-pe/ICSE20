#include "Pessoa.h"
#include <string.h>
#include <iostream>

using namespace std;

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, char *nome)
{
    Inicializa(diaNa,mesNa,anoNa,nome);
}

Pessoa::Pessoa()
{
    Inicializa(0,0,0);
}

Pessoa::~Pessoa( )
{

}

void Pessoa::Inicializa(int diaNa, int mesNa, int anoNa, char *nome)
{
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    idadeP = 0;
    strcpy(nomeP, nome);
}

void Pessoa::Calc_Idade ( int diaAT, int mesAT, int anoAT )
{
    idadeP = anoAT - anoP;
    if (mesP < mesAT)
        {
            idadeP = idadeP - 1;
        }
        else
        {
        if (mesP == mesAT)
        { if (diaP < diaAT)
           {
                idadeP = idadeP - 1;
           }
        }
        }
        // o comando passa a ser encapsulado dentro do método...
        cout << "A idade da Pessoa " << nomeP<< " seria "
             << idadeP << endl;
}

int Pessoa::informaIdade ( )
{
    return idadeP;
}

void Pessoa::setUnivFiliado (Universidade* pu)
{
    pUnivFiliado = pu;
}

void Pessoa::setDepartamento (Departamento* pdep)
{ // Aqui é uma associação porque é armazenado um apontamento// para o Departamento.
    pDptoFiliado = pdep;
}

void Pessoa::OndeTrabalho ()
{
    // Um método da referência UnivFiliado é chamado.
    cout << nomeP <<" trabalha para a " << pUnivFiliado->getNome() << endl;
}

void Pessoa::QualDepartamentoTrabalho ()
{
    cout << nomeP << "trabalha para a " << pUnivFiliado->getNome()
    << pDptoFiliado->getNome()
    << endl;
    printf("\n");
}
