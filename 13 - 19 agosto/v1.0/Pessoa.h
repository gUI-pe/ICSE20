#include <stdio.h>

class Pessoa{
private:
    int dia;
    int mes;
    int ano;
    int idade;
    char *nome;

 public:
    Pessoa(int diap, int mesp, int anop, char nomep[20]);
    void Calc_idade(int diaf, int mesf, int anof);
    void printIdade();
};
