#include "Universidade.h"
#include <string.h>
#include <iostream>

using namespace std;


Universidade::Universidade( )
{
    for ( int i = 0 ; i < 50; i++) { pDptos [ i ] = NULL; }
}

Universidade::~Universidade ( )
{
}

char* Universidade::getNome ( )
{
    return nome;
}

void Universidade::setNome ( char* n )
{
    strcpy ( nome, n );
}

void Universidade::setDepartamento ( Departamento* pdep , int ctd )
{
    pDptos [ ctd ] = pdep;
}

void Universidade::imprimeDptos ( )
{
    for ( int i = 0 ; i < 50; i++)
    {
        if ( pDptos [ i ] != NULL )
            cout << pDptos[i]->getNome() << endl;
    }
}
