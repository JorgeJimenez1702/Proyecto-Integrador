
class Fecha
{
    public:
        Fecha();
        Fecha(int d, int m, int a); //Constructor de la clase fecha, recibe como parámetros un día (d), un mes (m) y un año (a).
        int getDia(); //Nos devuelve el día
        int getMes(); //Nos devuelve el mes
        int getAnho(); //Nos devuelve el año
    private:
        int dia;
        int mes;
        int anho; //Años a.d.C.
};
 