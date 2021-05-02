//Creada
#include <string>
#include "Sucursal.h"
#include "Cliente.h"
using namespace std;

class Empresa
{
    private:
        Sucursal * listaSucursales;
        int sizeSucursales;
        Cliente * listaClientes;
        int sizeClientes;

        
    public:
    Empresa();
    Empresa(int sizesucu ,Sucursal * listasucu, int sizecli , Cliente * c);

    void agregarSucursal(Sucursal s);
    int buscarSucursal(int idSuc);
    void quitarSucursal(int IdSucu);
    void modificarSucursal(int ID, string dir, string ciu, string est, string pa);
    int getSizeSucursales();

    void agregarCliente(Cliente c);
    int buscarCliente(int IdClien);
    void quitarCliente(int IdClien);
    void modificarCliente(int ID,string nombre, string direccion, long int telefono, string fechaNacimiento, string sexo, string rfc);
    int getSizeClientes();

};