#include "Empresa.h"
#include "Orden.h"
#include <iostream>
using namespace std;
int main(){
    Persona p1("Julian", "Golondrinas", 7551202502, "26/01/2001","masculino");
    Cliente c1(1,"Julian", "Golondrinas", 7551202502, "26/01/2001","masculino","HOLA");
    /*Empleado e1(p1, "Gerente", 1);
    Empleado*l = new Empleado[1];
    l[0]=e1;
    Sucursal s1 (1,"Av 5 de Mayo","Zihuatanejo","Guerrero", "Pais", l);
    Sucursal * listas1 = new Sucursal[1];
    listas1[0]=s1;
    Cliente * listac1 = new Cliente[1];
    listac1[0] = c1;
    Empresa emp1 (1, listas1,1 ,listac1 );
    emp1.modificarSucursal(1,"Av Empresarios", "Guadalajara", "Jalisco", "Mexico");
    emp1.quitarSucursal(1);
    emp1.modificarCliente(1, "Ximena","Solares", 4431607842,"25/53/85","femenino","adc");
    emp1.quitarCliente(1);*/

    Producto pp1(01,"Manzana", 50, 60, 40, 40);
    Producto * pro1 = new Producto[1];
    pro1[0]=pp1;
    int * can1 = new int[1];
    can1[0]=4;
    Inventario I1(can1,pro1,1);

    Orden o1(1,I1,"efectivo",c1,1);
    o1.showInfo();
    cout << "hola mundo" << endl;

}