#include "Orden.h"
#include <iostream>
using namespace std;

Orden::Orden(){
    id = 0;
    Inventario invt;
    Total = 0;
    formaPago ="Indefinida";
    Cliente i; //¿aquí ya se estaría llamando el constructor por default?
    cargo = 0;
}
Orden::Orden(int ID, Inventario invt, string tipoPago,Cliente clien, int car)
//Para hacer uso de este método debemos primero declarar un 'sub inventrario' que contenga el pedido del cliente.
{
    id = ID;
    inventario = invt;
    formaPago = tipoPago;
    cliente = clien;
    if (cargo == 1 || 2){//1 de gerente y 2 de vendedor
        cargo = car;
    }
    else{ 
        cout<<"Cargo invalido para pedir"<<endl;
    }
}

void Orden::agregarProducto(int codi, int cant, Inventario invGlobal)
{
    int posicion = invGlobal.buscarProducto(codi);
    int*cantidades = invGlobal.mostarCantidades();
    if (posicion>=0||cant<=cantidades[posicion])
    {
        Producto*productos = invGlobal.mostrarProductos();
        Producto prod = productos[posicion];
        inventario.agregarProducto(prod, cant);
    }
    else {cout<<"El codigo no existe dentro de los productos del inventario global o no hay suficientes unidades disponibles"<<endl;}
}

void Orden::quitarProducto(int codigo)
{
    inventario.borrarProducto(codigo);
}

void Orden::showInfo(){
    float Total = 0;
    for (int i=0;i<=inventario.mostrarContador();i++)
    {
        Producto*prods = inventario.mostrarProductos();
        float precio = prods[i].getPrecioVenta();
        int*cntds = inventario.mostarCantidades();
        float total = cntds[i]*precio;
        Total = Total + total;
    }
    cout << "ID orden:     " << id << endl << endl;
    cout << "Cliente Info: " << endl;
    cout << "Nombre:       " << cliente.getNombre() << endl;
    cout << "Direccion:    " << cliente.getDireccion() << endl;
    cout << "RFC:          " << cliente.getRFC() << endl;
    cout << endl << endl;
    inventario.mostrarInventarioOrden();
    cout << "Total:        " << Total << endl;
    cout << "Forma de pago:" << formaPago << endl;
}

void Orden::GetClienteInfo(){
    cout << "Cliente Info: " << endl;
    cout << "Nombre:       " << cliente.getNombre() << endl;
    cout << "Direccion:    " << cliente.getDireccion() << endl;
    cout << "RFC:          " << cliente.getRFC() << endl;
    cout << endl << endl;
}
/*float Orden::calcularTotal()
{
    float Total = 0;
    for (int i=0;i<=inventario.mostrarContador();i++)
    {
        Producto*prods = inventario.mostrarProductos();
        float precio = prods[i].getPrecioVenta();
        int*cntds = inventario.mostarCantidades();
        float total = cntds[i]*precio;
        Total = Total + total;
    }
    return Total;
}*/




/*float Orden::getTotal(){
    return Total;
}

char Orden::getFormaPago(){
    return formaPago;
    
}

void Orden::setTotal(float _total){
    Total=_total;
}
void Orden::setFormaPago(char _FormaPago){
    FormaPago=_FormaPago;
}*/
