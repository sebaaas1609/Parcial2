#include "empleado.h"

Empleado::Empleado(){}

Empleado::Empleado(string empresa, string cargo, float sueldo, string descripcion_)
    : empresa(empresa), cargo(cargo), sueldo(sueldo)
{
    DescripcionEmpleo descripcion_i(descripcion_);
    descripciones.push_back(descripcion_i);

}

void Empleado::setEmpresa(string empresa){
    this->empresa = empresa;
}

void Empleado::setSueldo(float sueldo){
    this->sueldo = sueldo;
}

void Empleado::setCargo(string cargo){
    this->cargo = cargo;
}

void Empleado::addDescripcion(DescripcionEmpleo descripcion){
    descripciones.push_back(descripcion);
}

string Empleado::getEmpresa(){
    return empresa;
}

string Empleado::getCargo(){
    return cargo;
}

float Empleado::getSueldo(){
    return sueldo;
}

vector<DescripcionEmpleo> Empleado::getDescripciones(){
    return descripciones;
}









