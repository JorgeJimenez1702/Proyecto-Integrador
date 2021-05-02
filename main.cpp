#include <iostream>
#include "Cliente.h"
#include "Empleado.h"
#include "Empresa.h"
#include "Fecha.h"
#include "Inventario.h"
#include "Orden.h"
#include "Persona.h"
#include "Producto.h"
#include "Sucursal.h"
using namespace std;


int main(){
    //Crear 2 sucursales
    Sucursal sucursal1;
    Sucursal sucursal2;
    //Agregar 1 gerente, 1 vendedor y 1 administrador por sucursal
    Persona persona1 = Persona("Juan Pablo Ramirez", "Cabañas del Monte 201", 6421171159, "17 de Julio de 1998", "Masculino");
    Persona persona2 = Persona("Josefina Castellano", "Fraccionamiento La Arboleda 113", 6421142853, "2 de Marzo de 2000", "Femenino");
    Persona persona3 = Persona("Estefano del Millar", "Colonia Castillo 456", 6428231147, "28 de Noviembre de 1992", "Masculino");
    Empleado empleado1 = Empleado(persona1, "Gerente", 0001);
    Empleado empleado2 = Empleado(persona2, "Vendedor", 0002);
    Empleado empleado3 = Empleado(persona3, "Administrador de Sucursal", 0003);
    sucursal1.agregarEmpleado(empleado1);
    sucursal1.agregarEmpleado(empleado2);
    sucursal1.agregarEmpleado(empleado3);
    Persona persona4 = Persona("María Rosario Ríos", "Fraccionamiento Los Alamos 312", 8287234561, "24 de Enero de 2001", "Femenino");
    Persona persona5 = Persona("Marla Fuentes Quesada", "Colonia Rio 1420", 6417562134, "13 de Mayo de 1994", "Femenino");
    Persona persona6 = Persona("Josue Vazquez de la Fuente", "Robles Pino Altos 123", 6838124558, "30 de Abril de 2003", "Masculino");
    Empleado empleado4 = Empleado(persona4, "Gerente", 0001);
    Empleado empleado5 = Empleado(persona5, "Vendedor", 0002);
    Empleado empleado6 = Empleado(persona6, "Administrador de Sucursal", 0003);
    sucursal2.agregarEmpleado(empleado4);
    sucursal2.agregarEmpleado(empleado5);
    sucursal2.agregarEmpleado(empleado6);
    //Agregar 4 productos, Modificar 1 producto y Quitar 1 producto
    int * cantidades = new int[4];
    cantidades[0] = 20;
    cantidades[1] = 20;
    cantidades[2] = 20;
    cantidades[3] = 20;
    Producto * productos = new Producto[4];
    productos[0] = Producto(0001, "Manzanas", 5.0, 5.5, 10.0, 10.0);
    productos[1] = Producto(0002, "Peras", 5.0, 5.5, 10.0, 10.0);
    productos[2] = Producto(0003, "Mangos", 5.0, 5.5, 10.0, 10.0);
    productos[3] = Producto(0004, "Duraznos", 5.0, 5.5, 10.0, 10.0);
    Inventario products = Inventario(cantidades, productos, 10);
    products.modificarProducto("Uvas", 3);
    products.borrarProducto(0001);
    //Agregar el número de piezas de cada producto a ambas sucursales
    sucursal1.SetInv(products);
    sucursal2.SetInv(products);
    //Agregar 3 clientes, Modificar 1 clienteyQuitar 1 cliente
    Cliente cliente1[3];
    cliente1[0] = Cliente(0001, "Jorge Jimenez", "fracc. los laureles 117", 6421171159, "Masculino", "17 de Oct de 2002", "A01253696");
    cliente1[1] = Cliente(0002, "Fernanda Jimenez", "fracc. los laureles 223", 6421172354, "Femenino", "14 de Oct de 2000", "A01263797");
    cliente1[2] = Cliente(0003, "José Jimenez", "fracc. los laureles 213", 6421141058, "Masculino", "22 de Oct de 2001", "A01283868");
    cliente1[0].ModificarCliente(0004, "Juan Jose de la Cruz", "Arboleda Escondida 420", 6421174859, "Masculino", "22 de Agosto de 1987", "A01243595");
    
    //Generar una ordene intenta asignársela a un administrador (deberá mostrar error y no procesar la orden) 
    Orden orden1 = Orden(0001, products, "Tarjeta", cliente1[0], 3);
    //Generar una orden e intenta asignársela a un vendedor 
    Orden orden2 = Orden(0001, products, "Tarjeta", cliente1[0], 2);
    //Mostrar los datos de la orden generada
    orden2.showInfo();
    //Mostrar los datos completos del cliente que compro la orden
    orden2.GetClienteInfo();
};