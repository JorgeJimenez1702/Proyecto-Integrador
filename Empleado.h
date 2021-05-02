//Agregue iostream, sucursal.h, cambie sucursal por IdSucursal, nombre de IdEmpleado, 
//Cambiar las id de empleado y sucursal como int,
//Agregar en los constructores la entrada de IdEmpleado
//Agregue la función  buscar empleado
//¿Id sucursal?
#ifndef PERSONA_H
#define PERSONA_H
#include "Persona.h"
#include <iostream>
using namespace std;

class Empleado {
private:
    string car;
    int IdEmp;
    int SizeEmp;
    Persona per;
public:
    Empleado();
    Empleado(Persona persona, string Cargo, int IdEmpleado);
    string getCargo();
    int getIdEmpleado();
    void setIdEmpleado(int id){IdEmp=id;}
    void setCargo(string c){car=c;}

};
#endif