//Creada
#include "Empresa.h"
#include <iostream>
using namespace std;

//Constructor sin argumentos
Empresa::Empresa(){
    listaSucursales = new Sucursal[1];
    sizeSucursales = 1;
    listaClientes = new Cliente[1];
    sizeClientes = 1;
}

//Constructor con arreglo especifico
Empresa::Empresa(int sizesucu, Sucursal * listaSuc, int sizecli, Cliente * listaCli){
    listaSucursales = listaSuc;
    sizeSucursales = sizesucu;
    listaClientes = listaCli;
    sizeClientes = sizecli;
}

int Empresa::getSizeSucursales(){
    return sizeSucursales;
}

void Empresa::agregarSucursal(Sucursal s){
    listaSucursales[sizeSucursales] = s;
    sizeSucursales++;
}
int Empresa::buscarSucursal(int idSuc)
{
    for (int i=0; i<this->sizeSucursales;i++)
    {
        if(listaSucursales[i].getIdSuc()==idSuc)
        {return i;}
        else {return -1;}
    }
}
void Empresa::modificarSucursal(int ID, string dir, string ciu, string est, string pa)
//Podra modificar el ID, la dirección, ciudad, estado y país.
{
    int j = buscarSucursal(ID);
    listaSucursales[j].setdirecSucu(dir);
    listaSucursales[j].setCiu(ciu);
    listaSucursales[j].setEst(est);
    listaSucursales[j].setPai(pa);
}

void Empresa::quitarSucursal(int IdSucu)
{
    int indice;
    for(int i=0;i<this->sizeSucursales;i++)
    {
        if(listaSucursales[i].getIdSuc()==IdSucu)
        {
            indice = i;
        }
        else{indice = -2;}
    }
    if(indice<0)
    {
        cout<<"La sucursal con ID: "<<IdSucu<<" no ha sido encontrado."<<endl;
    }
    else
    {
        listaSucursales[indice]=listaSucursales[sizeSucursales-1];
        listaSucursales[sizeSucursales-1]=listaSucursales[sizeSucursales];
        sizeSucursales--;

        cout<<"La sucursal con ID: "<<IdSucu<<"ha sido eliminado del registro."<<endl;
    }   
}

int Empresa::getSizeClientes(){
    return sizeClientes;
}

void Empresa::agregarCliente(Cliente c){
    listaClientes[sizeClientes] = c;
    sizeClientes++;
}

int Empresa::buscarCliente(int idcli)
{
    for (int i=0; i<this->sizeClientes;i++)
    {
        if(listaClientes[i].getIdCliente()==idcli)
        {return i;}
        else {return -1;}
    }
}
void Empresa::modificarCliente(int ID, string nombre, string direccion, long int telefono, string fechaNacimiento, string sexo, string rfc)
{
    int j = buscarSucursal(ID);
    listaClientes[j].setNombre(nombre);
    listaClientes[j].setDireccion(direccion);
    listaClientes[j].setTelefono(telefono);
    listaClientes[j].setRFC(rfc);
    listaClientes[j].setSexo(sexo);
    listaClientes[j].setFechaNacimiento(fechaNacimiento);
}


void Empresa::quitarCliente(int Idcli)
{
    int indice;
    for(int i=0;i<this->sizeClientes;i++)
    {
        if(listaClientes[i].getIdCliente()==Idcli)
        {
            indice = i;
        }
        else{indice = -2;}
    }
    if(indice<0)
    {
        cout<<"El cliente  con ID: "<<Idcli<<" no ha sido encontrado."<<endl;
    }
    else
    {
        listaClientes[indice]=listaClientes[sizeClientes-1];
        listaClientes[sizeSucursales-1]=listaClientes[sizeClientes];
        sizeClientes--;

        cout<<"El cliente con ID: "<<Idcli<<"ha sido eliminado del registro."<<endl;
    }   
}





