#include "Principal.h"
#include <string.h>
#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

Principal:: Principal ()
{
    Simao.Inicializa ( 3, 10, 1976, "Jean Simão" );
    Einstein.Inicializa ( 14, 3, 1879, "Albert Einstein" );
    Newton.Inicializa ( 4, 1, 1643, "Isaac Newton" );

    UTFPR.setNome("UTFPR");
    Princeton.setNome("Princeton, Nova Jersey");
    Cambridge.setNome("Cambridge, Inglaterra");

    DAELN.setNome("Eletronica");
    FisicaPrinceton.setNome("Fisica");
    MatematicaCambridge.setNome("Matematica");

    UTFPR.setDepartamento(&DAELN);
    Princeton.setDepartamento(&FisicaPrinceton);
    Cambridge.setDepartamento(&MatematicaCambridge);

    printf ("\n");
    // "Filiação" a universidade.
    Simao.setUnivFiliado (&UTFPR);
    Einstein.setUnivFiliado (&Princeton);
    Newton.setUnivFiliado (&Cambridge);

    printf("\n");
    // "Filiação" ao departamento.
    Simao.setDepartamento(&DAELN);
    Einstein.setDepartamento(&FisicaPrinceton);
    Newton.setDepartamento(&MatematicaCambridge);

    SYSTEMTIME st;
    GetSystemTime (&st);

    diaAtual = st.wDay;
    mesAtual = st.wMonth;
    anoAtual = st.wYear;

    Executar ();
}

Principal:: ~Principal ( )
{

}

void Principal::Executar()
{
    //execucao
    Simao.Calc_Idade ( diaAtual, mesAtual, anoAtual );
    Einstein.Calc_Idade ( diaAtual, mesAtual, anoAtual );
    Newton.Calc_Idade ( diaAtual, mesAtual, anoAtual );

    cout << endl;
    Simao.OndeTrabalho();
    Einstein.OndeTrabalho();
    Newton.OndeTrabalho();
    printf("\n");
    // Departamento que a Pessoa trabalha.
    Simao.QualDepartamentoTrabalho ();
    Einstein.QualDepartamentoTrabalho ();
    Newton.QualDepartamentoTrabalho ();
}
