#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <vector>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "descripcionempleo.h"
using namespace std;


class Empleado{
private:
    string empresa;
    string cargo;
    float sueldo;
    vector <DescripcionEmpleo> descripciones;
public:
    Empleado();
    Empleado(string empresa, string cargo, float sueldo, string descripcion_);
    void setSueldo(float sueldo);
    void setEmpresa(string empresa);
    void setCargo(string cargo);
    void addDescripcion(DescripcionEmpleo descripcion);
    string getEmpresa();
    string getCargo();
    float getSueldo();
    vector<DescripcionEmpleo> getDescripciones();
};

#endif // EMPLEADO_H
