#include "Universidade.h"
#include <string.h>

Universidade::Universidade ( char *n)
{
    strcpy ( nome, n );
}
Universidade::~Universidade ( )
{
}

void Universidade::setNome ( char* n)
{
    strcpy (nome, n);
}

char* Universidade::getNome ( )
{
    return nome;
}

void Universidade::setDepartamento (Departamento*pdep)
{
// Agrega��o via ponteiros
    pDpto = pdep;
}
