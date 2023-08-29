#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_
#include "Pessoa.h"
#include "Universidade.h"

class Principal
{
    private:
        Pessoa Christiano;
        Pessoa Diego, Simao;
        Pessoa Einstein;
        Pessoa Newton;

        Universidade UTFPR, Princeton, Cambridge;

        Departamento ModaUTFPR, TecnologiaUTFPR, DAELN, FisicaPrinceton, MatematicaCambridge;

        int diaAtual, mesAtual, anoAtual;

    public:
        Principal();
        ~Principal ();
        void Executar();
};

#endif
