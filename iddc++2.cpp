/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

struct Pessoa{
public:
    int dia;
    int mes;
    int ano;
    int idade;
    
    Pessoa(int diap, int mesp, int anop)
    {
        dia = diap;
        mes = mesp;
        ano = anop;
        idade = -1;
    }
    
    void Calc_idade(int diaf, int mesf, int anof)
    {
        idade = anof - ano;
        
        if(mes < mesf)
            idade = idade - 1;
        else
        {
            if(mes == mesf)
                if(dia > diaf)
                    idade = idade -1;
        }
    }
};

int main()
{
    struct Pessoa maria_Fernanda(12, 8, 2003);
    
    maria_Fernanda.Calc_idade(14, 8, 2023);

    printf("A idade de Mf seria %d", maria_Fernanda.idade);

    return 0;
}