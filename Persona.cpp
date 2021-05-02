#include "Persona.h"
#include <iostream>

using namespace std;

Persona::Persona(){
    this->nom = "";
    this->direcc = "";
    this->tel = 0;
    this->se = "";
    this->fechaNac = "";
}

Persona::Persona(string Nombre, string Direccion, long int Telefono, string fechaNacimiento, string Sexo){
    this->nom = Nombre;
    this->direcc = Direccion;
    this->tel = Telefono;
    this->se = Sexo;
    this->fechaNac = fechaNacimiento;
}

string Persona::getNombre()
{
    return nom;
}

string Persona::getDireccion()
{
    return direcc;
}

string Persona::getSexo()
{
    return se;
}

long int Persona::getTelefono()
{
    return tel;
}

string Persona::getFechaNacimiento()
{
    return fechaNac;
}