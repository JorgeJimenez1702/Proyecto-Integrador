//modifica
#include <iostream>
#include "Orden.h"
using namespace std;

main()
{
    Sucursal sucu1(1231,"Golondrinas 30, Guerrero", "Zihuatanejo", "Mexico");
    //¿Inventario global y lista de empleados?
    Sucursal sucu1(1231,"Paseo Solares 1632, Jalisco", "Zapopan", "Mexico");
    //¿Inventario global y lista de empleados?

    Empleado emp1("Juan Antonio Rodriguez","Av empresarios 82", 4434503294, Fecha(26,02,1985), "Masculino", "Gerente", Persona())
    //Duda en registrar dobles datos de nombre en parametro y en Persona()
    Empleado emp2("Elizabeth Sanchez","Av Juan Palomar y Arias 43", 7551403608, Fecha(04,10,1990), "Femenino", "Vendedor", Persona())
    Empleado emp3("Angela Escobosa","Av Chapultepec 21", 4435603209, Fecha(20,11,1987), "Femenino", "Administrador", Persona())

    int*cantidades;
    Producto*productos;
    cantidades = new int[50];
    productos = new Producto[50];

    int*cantidades2;
    Producto*productos2;
    cantidades2 = new int[50];
    productos2 = new Producto[50];

    Inventario inv(cantidades, productos, 0); //Inventario global
    Inventario inv2(cantidades2, productos2,0); //Inventario orden

    Producto prod1(1231,"Silla gamer",1000,1500,15,3);
    Producto prod2(1232,"Mesa familiar",2312,4565,25,9);
    Producto prod3(1233,"Mesa circular",5893,2345,18,4);
    Producto prod4(1234,"Espejo",1350,1700,10,6);
    Producto prod5(1235,"Base cama matrimonial",2000,2899,17,2.5);
    Producto prod6(1236,"Tarja cocina",3000,3800,3,2);
    Producto prod7(1237,"Escritorio",2500,3200,10,2);
    Producto prod8(1238,"Alacena",3000,5000,30,5);

    Cliente cliente1("Jorge Constantino","Guerrero #134, Guanajuato", 6421171159 , "Masculino", Fecha(17, 10, 2002),"ARCJ981105");
    Cliente cliente2("Ximena Rocha","Solano 45", 6421171159 , "Femenino", Fecha(17, 10, 2002),"ROVX000812");
    Cliente cliente3("Lucila Delgado","Paso del norte 112", 6421171159 , "Femenino", Fecha(17, 10, 2002), "VADL540905");
    Orden ord1(1,inv2,"Efectivo",cliente2);

    inv.agregarProducto(prod1,3);
    inv.agregarProducto(prod2,5);
    inv.agregarProducto(prod3,10);
    inv.agregarProducto(prod4,4);
    inv.agregarProducto(prod5,9);
    inv.agregarProducto(prod6,6);
    inv.agregarProducto(prod7,2);
    inv.agregarProducto(prod8,18);
    inv.mostrarInventarioCompleto();

    //inv.editarProducto(1236,14);
    inv.borrarProducto(1234);
    inv.mostrarInventarioCompleto();

    ord1.agregarProducto(1231,4,inv);
    ord1.agregarProducto(1233,1,inv);
    ord1.agregarProducto(1237,2,inv);
    ord1.showInfo();


}
