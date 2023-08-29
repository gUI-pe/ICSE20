#include "Principal.h"
#include <string.h>
#include <iostream>

using namespace std;

Principal:: Principal ()
{
    // Inicialização do(s) ojeto(s) da classe Pessoa

    Christiano.Inicializa ( 17, 8, 1989, "Zé Maria");
    Diego.Inicializa ( 6, 10, 1989, "Diego");
    Simao.Inicializa ( 3, 10, 1976, "Jean Simão");
    Einstein.Inicializa ( 14, 3, 1879, "Albert Einstein");
    Newton.Inicializa ( 4, 1, 1643, "Isaac Newton");

    // Registro do(s) nome(s) da(s) universidade(s)
    UTFPR.setNome ( "Universidade Tecnologica Federal do Paraná");
    Princeton.setNome ( "University of Princeton" );
    Cambridge.setNome ( "University of Cambridge" );

    // Registro do(s) nome(s) do(s) departamento(s)
    ModaUTFPR.setNome ( "Moda" );
    TecnologiaUTFPR.setNome ( "Tecnologia da UTFPR" );
    DAELN.setNome ( "Eletronica da UTFPR" );
    FisicaPrinceton.setNome ( "Fisica de Princenton" );
    MatematicaCambridge.setNome ( "Matematica de Cambridge" );

    // "Agregação" do(s) Departamento(s) a(s) Univesidade(s).
    UTFPR.setDepartamento ( &DAELN, 0 );
    UTFPR.setDepartamento ( &ModaUTFPR, 1 );
    UTFPR.setDepartamento ( &TecnologiaUTFPR, 2 );
    Princeton.setDepartamento ( &FisicaPrinceton, 0 );
    Cambridge.setDepartamento ( &MatematicaCambridge, 0 );

    // "Filiação" a universidade. Christiano.setUnivFiliado ( &UTFPR );
    Diego.setUnivFiliado ( &UTFPR );
    Simao.setUnivFiliado ( &UTFPR );
    Einstein.setUnivFiliado ( &Princeton );
    Newton.setUnivFiliado ( &Cambridge );
    printf ("\n");

    // "Filiação" ao departamento.
    Christiano.setDepartamento ( &ModaUTFPR);
    Diego.setDepartamento ( &TecnologiaUTFPR);
    Simao.setDepartamento ( &DAELN);
    Einstein.setDepartamento ( &FisicaPrinceton );
    Newton.setDepartamento ( &MatematicaCambridge );
    printf ("\n");

    cout << " Informe o dia/mes/ano." << endl;
    cin >> diaAtual >> mesAtual >> anoAtual;

    Executar ();
}

Principal:: ~Principal ( )
{

}

void Principal::Executar()
{
    // Cálculo da idade.
    Christiano.Calc_Idade ( diaAtual, mesAtual, anoAtual );
    Diego.Calc_Idade ( diaAtual, mesAtual, anoAtual );
    Simao.Calc_Idade ( diaAtual, mesAtual, anoAtual );
    Einstein.Calc_Idade ( diaAtual, mesAtual, anoAtual );
    Newton.Calc_Idade ( diaAtual, mesAtual, anoAtual );
    printf ("\n");

    // Universidade que a Pessoa trabalha.
    Diego.OndeTrabalho ( );
    Simao.OndeTrabalho ( );
    Einstein.OndeTrabalho ( );
    Newton.OndeTrabalho ( ); printf("\n");

    // Departamento que a Pessoa trabalha.
    Christiano.QualDepartamentoTrabalho ( );
    Diego.QualDepartamentoTrabalho ( );
    Simao.QualDepartamentoTrabalho ( );
    Einstein.QualDepartamentoTrabalho ( );
    Newton.QualDepartamentoTrabalho ( );
}
