#ifndef DESCRIPCIONEMPLEO_H
#define DESCRIPCIONEMPLEO_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class DescripcionEmpleo{
private:
    string descripcion;
public:
    DescripcionEmpleo();
    DescripcionEmpleo(string descripcion);
    void setDescripcion(string descripcion);
    string getDescripcion();
};

#endif // DESCRIPCIONEMPLEO_H
