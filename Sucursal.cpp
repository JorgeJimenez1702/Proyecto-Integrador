//Modificada
#include "Sucursal.h"
#include <iostream>
using namespace std;

Sucursal::Sucursal()
{
    this->idSucursal = 0;
    this->direcSucursal = "Direccion default.";
    this->ciudad = "Ciudad default.";
    this->estado = "Estado default.";
    this->pais = "Pais default.";
    this->cntdEmp = 1;
    Inventario invt;
    Empleado e;
    this->listaEmpleados = new Empleado[1];
}

Sucursal::Sucursal(int ID, string dir, string ciu, string est, string pa, Inventario global, Empleado*listaEmp)
{
    this->idSucursal = ID;
    this->direcSucursal = dir;
    this->ciudad  = ciu;
    this->estado = est;
    this->pais = pa;
    this->inventarioGlobal = global; 
    this->listaEmpleados = listaEmp;   
}
/* void Sucursal::modificarSucursal(int ID, string dir, string ciu, string est, string pa)
//Podra modificar el ID, la dirección, ciudad, estado y país.
{
    idSucursal = ID;
    direcSuc = dir;
    ciudad = ciu;
    estado = est;
    pais = pa;
}
*/

/*void Sucursal::quitarSucursal(string idSuc, Sucursal*list, int sucExistentes)
{
    int i = buscarSucursal(idSuc, list, sucExistentes);
        if(i>=0){
            list[i]=list[sucExistentes-1];
            list[sucExistentes-1]=list[sucExistentes];
            sucExistentes--;

            cout<<"Ha eliminado la sucursal ->"<<idSuc<<". La cantidad de sucursales existentes actualmente es:" <<sucExistentes<<endl;
        }   
        else
        {
            cout<<idSuc<< ": Esta sucursal no ha sido encontrada."<< endl;
        }
}
*/
/*
int Sucursal::buscarSucursal(string idSuc, Sucursal*list, int sucExistentes)
{
    for (int i=0; i<sucExistentes;i++)
    {
        if(list[i].getIdSuc()==idSuc)
        {return i;}
        else {return -1;}
    }
}
*/

/*void Sucursal::agregarSucursal(Sucursal nueva, Sucursal*list,int sucursalesExistentes)
{
    list[sucursalesExistentes]= nueva; //¿Así está bien definido el índice? 
}
*/

void Sucursal::agregarEmpleado(Empleado e)
{
    listaEmpleados[cntdEmp] = e;
    cntdEmp++;
}

/*void Sucursal::agregarSucursal(Sucursal nueva, Sucursal*list,int sucursalesExistentes)
{
    list[sucursalesExistentes]= nueva; //¿Así está bien definido el índice? 
}
*/
void Sucursal::quitarEmpleado(int idEmpleado)
{
    int indice;
    for(int i=0;i<this->cntdEmp;i++)
    {
        if(listaEmpleados[i].getIdEmpleado()==idEmpleado)
        {
            indice = i;
        }
        else{indice = -2;}
    }
    if(indice<0)
    {
        cout<<"El empleado con ID: "<<idEmpleado<<" no ha sido encontrado."<<endl;
    }
    else
    {
        listaEmpleados[indice]=listaEmpleados[cntdEmp-1];
        listaEmpleados[cntdEmp-1]=listaEmpleados[cntdEmp];
        cntdEmp--;

        cout<<"El empleado con ID: "<<idEmpleado<<"ha sido eliminado del registro."<<endl;
    }   
}