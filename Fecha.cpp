#include <iostream>
#include "Fecha.h"
 
using namespace std;

Fecha::Fecha()
{
    dia = 1;
    mes = 1;
    anho = 1000;
}
 
Fecha::Fecha(int d,int m, int a)
{
    dia = d;
    mes = m;
    anho = a;
}
int Fecha::getDia()
{ 
    return dia;
}
int Fecha::getMes()
{
    return mes;
}
int Fecha::getAnho()
{
    return anho;
}