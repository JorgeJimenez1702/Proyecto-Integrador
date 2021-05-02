//Agregue el void y set de Telefono y sexo
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Persona{
protected:
    string nom;
    string direcc;
    long int tel;
    string se;
    string fechaNac;
public:
    Persona();
    Persona(string nombre, string direccion, long int telefono, string fechaNacimiento, string sexo);
    string getNombre();
    string getDireccion();
    long int getTelefono();
    string getSexo();
    string getFechaNacimiento();
    void setNombre(string n){nom=n;}
    void setDireccion(string d){direcc=d;}
    void setTelefono(long int t){tel=t;}
    void setSexo(string s){se=s;}
    void setFechaNacimiento(string fn){fechaNac=fn;} 

};