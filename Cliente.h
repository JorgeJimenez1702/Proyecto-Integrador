//Modificado
#pragma once
#include <string>
#include "Persona.h"
using namespace std;

class Cliente : public Persona{
private:
    string RFC;
    int IdCliente;

public:
    Cliente();
    Cliente(int, string, string, long int, string, string , string); //¿como recibir un parametro hereditario?
    string getRFC();
    int getIdCliente();
    void setIdCliente(int i);
    void setRFC(string rfc);
    void ModificarCliente(int Id, string Nombre, string Direccion, long int Telefono, string Sexo, string fechaNacimiento, string erreFC);
};
