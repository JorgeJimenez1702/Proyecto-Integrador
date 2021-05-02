#pragma once
#include "Producto.h"

class Inventario
{
private:
    int * cantidades; //Apuntador que permite definir un arreglo (indefinido) de elementos.
    Producto * productos; //Para definir desde el constructor o incluso desde el main() cuantós elementos queremos.
    int cntdProdRegis;

public:
    Inventario();
    Inventario(int*cts, Producto*prods,int CPR);
    int buscarProducto(int codi);
    void agregarProducto(Producto p, int cant);
    void mostrarInventarioOrden();
    void mostrarInventarioCompleto();
    void editarCntdProducto(int codi, int cant); //Nos permite modificar únicamente la cantidad existente de un producto en el inventario.
    void borrarProducto(int codi);
    int * mostarCantidades();
    Producto * mostrarProductos();
    int mostrarContador(){return cntdProdRegis;}
    void Inventario::modificarProducto(string, int);
};
