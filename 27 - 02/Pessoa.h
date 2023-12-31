#include <stdio.h>

#include "Universidade.h"


class Pessoa{
private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP[30];

    Universidade* pUnivFiliado;
    Departamento* pDptoFiliado;

 public:
    Pessoa(int diaNa, int mesNa, int anoNa, char* nome = "");

    Pessoa();
    ~Pessoa();

    void Inicializa ( int diaNa, int mesNa, int anoNa, char* nome = "" );
    void Calc_Idade(int diaAr, int mesAr, int anoAr);
    int informaIdade ( );

    void setUnivFiliado (Universidade* pu);
    void setDepartamento (Departamento* pdep);
    void OndeTrabalho ();
    void QualDepartamentoTrabalho ();
};
