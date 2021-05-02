#include <iostream>
#include "Producto.h"
using namespace std;

Producto::Producto()
{
    codigoProducto = 0;
    nombreProducto = "Nombre default";
    costo = 0;
    precio = 0;
    peso = 0;
    tamanoEmpaque  =  0;
}
Producto::Producto(int codProd, string nomProd, float cos, float pre, float p, float tamE)
{
    codigoProducto = codProd;
    nombreProducto = nomProd;
    costo = cos;
    precio = pre;
    peso = p;
    tamanoEmpaque = tamE;
}

void Producto::showProductoCPV()
{
    cout<<"Codigo: "<<codigoProducto<<endl;
    cout<<"Nombre del Producto: "<<nombreProducto<<endl;
    cout<<"Precio: "<<precio<<endl;
}

void Producto::showProductoCompleto()
{
    cout<<"Codigo: "<<codigoProducto<<endl;
    cout<<"Nombre del producto: "<<nombreProducto<<endl;
    cout<<"Costo: "<<costo<<endl;
    cout<<"Precio: "<<precio<<endl;
    cout<<"Peso: "<<peso<<endl;
    cout<<"Tamano Empaque: "<<tamanoEmpaque<<endl;
}
