#include "Cliente.h"
#include "Inventario.h"

class Orden
{
private:
    int id;
    Inventario inventario;
    float Total;
    string formaPago;
    Cliente cliente;
    int cargo;    
public:
    Orden();
    Orden(int ID, Inventario invt, string tipoPago, Cliente clien, int cargo);
    void agregarProducto(int codigo, int cant, Inventario invGlobal);
    void quitarProducto(int codigo);
    float calcularTotal();
    void showInfo();
    int getcargo(){return cargo;}
    void setcargo(int c){cargo=c;}
    void GetClienteInfo();
    //void compararInventarios(Inventario inventarioGlobal); 
    //Descuenta los productos vendidos del inventario global.
    //float getTotal();
    //void setTotal(float);
    //string getFormaPago();
    //void setFormaPago(string);
};

