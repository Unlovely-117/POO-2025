#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include <iostream>

using namespace std;

class Deportista{

    protected:

        string nombre;
        int edad;
        string cedula;
        string codigo;
        int programa;
        string sexo;

    public:

        void setNombre(string nombre);
        string getNombre();
        void setEdad(int edad);
        int getEdad();
        void setCodigo(string Codigo);
        string getCodigo();
        void setPrograma(int programa);
        int getPrograma();
        void setSexo(string sexo);
        string getSexo();


    private:


};

#endif