#include "Cliente.h"
using namespace std;

Cliente::Cliente() : Persona (){
    RFC = "";
};

Cliente::Cliente(int Id, string Nombre, string Direccion, long int Telefono, string Sexo, string fechaNacimiento, string erreFC):Persona(Nombre, Direccion, Telefono, fechaNacimiento, Sexo){
    RFC = erreFC;
    IdCliente = Id;
}
string Cliente::getRFC()
{
    return RFC;
}
void Cliente::setRFC(string rfc)
{
    RFC = rfc;
}
void Cliente::ModificarCliente(int Id, string Nombre, string Direccion, long int Telefono, string Sexo, string fechaNacimiento, string erreFC){
    RFC = erreFC;
    IdCliente = Id;
    nom = Nombre;
    direcc = Direccion;
    tel = Telefono;
    se = Sexo;
    fechaNac = fechaNacimiento;
}