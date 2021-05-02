//Dudas de el registro de Persona
//Falta modificar cargo
#include "Empleado.h"

using namespace std;

Empleado::Empleado()
{
    this->car = "";
    Persona persona;
    this->IdEmp = 0;
    this->SizeEmp = 0;
};

Empleado::Empleado(Persona persona, string Cargo, int IdEmpleado)
{
    car = Cargo;
    IdEmp = IdEmpleado;
    persona = persona;
}

int Empleado::getIdEmpleado()
{
    return IdEmp;
}
/*void Empleado::modificarCargo(string car) //De un objeto tipo empleado.
{
    cargo = car;    
}
*/
//Modificar el cargo del empleado desde la lista general.
/*void Empleado::modificarCargo(string car, string idEmp)
{
    
}
*/