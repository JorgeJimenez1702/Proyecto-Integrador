//Modificada
#include <string>
using namespace std;
class Producto
{
    private:
    int codigoProducto;
    string nombreProducto;
    float costo;
    float precio;
    float peso;
    float tamanoEmpaque;

    public:
    Producto();
    Producto(int codProd, string nomProd, float cos,float pre,float pes, float tamE);
    int getCodigoProducto(){return codigoProducto;}
    string getNombreProducto(){return nombreProducto;}
    float getPrecioCompra(){return costo;}
    float getPrecioVenta(){return precio;}
    float getPeso(){return peso;}
    float getTamanoEmpaque(){return tamanoEmpaque;}
    void showProductoCPV();
    void showProductoCompleto();
    void setCodigoProducto(int c){codigoProducto=c;}
    void setNombreProducto(string n){nombreProducto=n;}
    void setPrecioVenta(float pv){precio=pv;}
    void setTamanoEmpaque(float t){tamanoEmpaque=t;}
    void setPrecioCompra(float pc){costo=pc;}
    void setPeso(float p){peso=p;}
};
