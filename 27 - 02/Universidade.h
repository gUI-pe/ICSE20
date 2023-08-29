#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_

#include "Departamento.h"

class Universidade
{
  private:
    char nome[30];
    Departamento* pDptos [50];
  public:
    // Construtor
    Universidade ();

    // Destrutor
    ~Universidade ( );

    void setNome (char* n);
    char* getNome ( );
    void setDepartamento(Departamento* pdep, int ctd);
    void imprimeDptos();
};

#endif
