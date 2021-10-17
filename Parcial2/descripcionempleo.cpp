#include "descripcionempleo.h"

DescripcionEmpleo::DescripcionEmpleo(){}

DescripcionEmpleo::DescripcionEmpleo(string descripcion){
    this->descripcion = descripcion;
}

void DescripcionEmpleo::setDescripcion(string descripcion){
    this->descripcion = descripcion;
}

string DescripcionEmpleo::getDescripcion(){
    return descripcion;
}
