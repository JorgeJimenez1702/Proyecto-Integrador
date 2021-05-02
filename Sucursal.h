//Modificada
#include <string>
#include "Inventario.h"
//#include "Cliente.h"
#include "Empleado.h"
using namespace std;
class Sucursal
{
    private:
        int idSucursal; //Le cambie de string a int
        string direcSucursal;
        string ciudad;
        string estado;
        string pais;
        Inventario inventarioGlobal;
        Empleado*listaEmpleados;
        int cntdEmp;
        //sucursal*lista;

    public:
        Sucursal();
        Sucursal(int ID, string dir,string ciu,
        string est, string pa, Inventario global, Empleado*listaEmp);
        /*void modificarSucursal(int ID, string dir,
        string ciu,string est, string pa);
        */
        int getIdSuc(){return idSucursal;}
        string getdirecSucu(){return direcSucursal;}
        string getCiu(){return ciudad;}
        string getEst(){return estado;}
        string getPai(){return pais;}
        void agregarEmpleado(Empleado nuevo);
        void quitarEmpleado(int idEmpleado);
        int buscarEmpleado(int);
        void setIdSuc(int i){idSucursal=i;}
        void setdirecSucu(string d){direcSucursal=d;}
        void setCiu(string c){ciudad=c;}
        void setEst(string e){estado=e;}
        void setPai(string p){pais=p;}
        void SetInv(Inventario a){inventarioGlobal = a;}
        //¿Como hago de una lista un get?
        //Se debería agregar automaticamente a la lista de 
        //la sucursal correspodiente en el constructor de cada empleado. 
        //¿Como hago de una lista un get?
        //Se debería agregar automaticamente a la lista de 
        //la sucursal correspodiente en el constructor de cada empleado. 
        //int buscarEmpleado(int idEmpleado);
        //Estos metodos sería mejor implementarlos desde otra clase que guarde la lista de sucursales.
        //void agregarSucursal(Sucursal nueva, Sucursal*list,int sucursalesExistentes);
        //void quitarSucursal(string idSuc, Sucursal*list,int sucursalesExistentes);
        //int buscarSucursal(string idSuc,Sucursal*list,int sucursalesExistentes);

};