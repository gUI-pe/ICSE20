#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_

#include "Departamento.h"

class Universidade
{
  private:
    char nome[30];
    Departamento* pDpto;
  public:
    // Construtor
    Universidade (char* n = "");

    // Destrutor
    ~Universidade ( );

    void setNome (char* n);
    char* getNome ( );
    void setDepartamento(Departamento* pdep);
};

#endif
