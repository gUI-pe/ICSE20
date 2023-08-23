#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_
#include "Pessoa.h"
#include "Universidade.h"

class Principal
{
    private:
        Pessoa Simao;
        Pessoa Einstein;
        Pessoa Newton;

        Universidade UTFPR;
        Universidade Princeton;
        Universidade Cambridge;

        Departamento DAELN;
        Departamento FisicaPrinceton;
        Departamento MatematicaCambridge;

        int diaAtual;
        int mesAtual;
        int anoAtual;

    public:
        Principal();
        ~Principal ();
        void Executar();
};

#endif
