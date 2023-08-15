#include <stdio.h>



struct Pessoa{
    int dia;
    int mes;
    int ano;
    int idade;
};

int Calculo(struct Pessoa x, int ano, int mes, int dia);

void main ()
{
    struct Pessoa einsten;
    struct Pessoa newton;

    einsten.dia = 14;
    einsten.mes = 3;
    einsten.ano = 1879;

    newton.dia = 4;
    newton.mes = 1;
    newton.ano = 1643;

    einsten.idade = Calculo(einsten, 2023, 2, 9);
    newton.idade = Calculo(newton, 2023, 8, 9);

    printf("Einsten tem %d anos de idade \n", einsten.idade);
    printf("Newton tem %d anos de idade \n", newton.idade);

    getchar();
}

int Calculo(struct Pessoa x, int ano, int mes, int dia)
{
    int idade;

    if(mes > x.mes)
        idade = ano - x.ano;
    else if(mes == x.mes)
    {
        if (dia > x.dia)
            idade = ano - x.ano;
    }
    else
        idade = ano - x.ano - 1;


    return idade;
}
