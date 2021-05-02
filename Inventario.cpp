#include "Inventario.h"
#include <iostream>
using namespace std;

Inventario::Inventario(){
    cantidades = new int[50];
    productos = new Producto[50]; 
    //Define un arreglo de 50 espacios de objetos tipo Producto llamado productos.
    cntdProdRegis = 0; //Medio de control para saber en que posisción de la lista está el último producto agregado.
}
Inventario::Inventario(int*cts,Producto*prods, int cntd)
//Mandamos como parametros a 2 arreglos relativamente indefinidos
//para que el usuario pueda definirlos según le convenga en el main antes mandar llamar este método.
{
    cantidades = cts;
    productos = prods;
    cntdProdRegis = cntd;
}

int Inventario::buscarProducto(int codi)
{
    for (int i=0; i<=cntdProdRegis; i++){
        //Comparamos el codigo que estamos buscando con cada espacio que esta siendo usado 
        //dentro de nuestro arreglo de códigos para obtener la posisción(i) que contiene dicho código.
        int c = productos[i].getCodigoProducto();
        if(c == codi){
            return i;
        }
    }
    return -1; //Medio de control para verificar fácilmente si el código existe o no.
}
void Inventario::agregarProducto(Producto p, int cant)
{
    productos[cntdProdRegis] = p; //Le asignamos un producto al primer espacio de nuestro arreglo "productos"
    cantidades[cntdProdRegis] = cant;
    cntdProdRegis += 1;
}
void Inventario::mostrarInventarioOrden(){
    for (int i=0; i<=cntdProdRegis;i++){
        productos[i].showProductoCPV();
        cout<<"Cantidad:        "<<cantidades[i]<<endl;
    }
}
void Inventario::mostrarInventarioCompleto(){
    for (int i=0; i<=cntdProdRegis;i++){
        productos[i].showProductoCompleto();
        cout<<"Unidades existentes:        "<<cantidades[i]<<endl;
    }
}
void Inventario::borrarProducto(int codi)
{
    if (cntdProdRegis>0){
        int i = buscarProducto(int (codi));
        if(i>=0){
            productos[i]=productos[cntdProdRegis-1];
            cantidades[i]=cantidades[cntdProdRegis-1];
            
            productos[cntdProdRegis-1]=productos[cntdProdRegis];
            cantidades[cntdProdRegis-1]=0;
            
            cntdProdRegis--;
            cout<<"Borrado ->"<<codi<<"la cantidad de productos actual es:" <<cntdProdRegis<<endl;
        }   else{
            cout<<codi<< ": Producto no encontrado"<< endl;
        }
    }else{
        cout <<"No hay productos en el inventario"<<endl;
    }
}
void Inventario::editarCntdProducto(int codi, int cant){
    int i = buscarProducto(int (codi));
    cantidades[i]=cant;
}

int*Inventario::mostarCantidades()
{
    return cantidades;
}

Producto*Inventario::mostrarProductos()
{
    return productos;
}

void Inventario::modificarProducto(string nombre, int indice){
    productos[indice].setNombreProducto(nombre);
}