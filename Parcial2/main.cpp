#include <iostream>
#include "empleado.h"
#include "descripcionempleo.h"
using namespace std;

int main(){
    string empresa, cargo; float sueldo; string descripcion;
    cout << endl;
    cout << "Digite el nombre de la empresa: "; cin >> empresa;
    cout << "Ingrese el cargo: "; cin >> cargo;
    cout << "Ingrese el sueldo: ";cin >> sueldo;
    cout << "Ingrese la descripcion del trabajo: "; cin >> descripcion;

    Empleado empleado(empresa, cargo, sueldo, descripcion);
    vector <DescripcionEmpleo> descripciones_;
    int selection;
    do{
        fflush(stdin);
        cout << "Menu" << endl;
        cout << "1. Agregar descripcion." << endl;
        cout << "2. Mostrar Resumen Empleado." << endl;
        cout << "3. Terminar" << endl;
        cout << "Digite su seleccion: "; cin >> selection;

        if(selection == 1){
            fflush(stdin);
            cout << "descripcion nueva"; cin >> descripcion;
            DescripcionEmpleo descripcionNueva(descripcion);
            empleado.addDescripcion(descripcionNueva);
        }else if(selection == 2){
            cout << endl;
            cout << "Empresa: " << empleado.getEmpresa() << endl;
            cout << "Cargo: " << empleado.getCargo() << endl;
            cout << "Sueldo: " << to_string(empleado.getSueldo()) << endl;
            cout << "Descripcion: " << endl;
            descripciones_ = empleado.getDescripciones();
            for(int i{0}; i < descripciones_.size(); i++){
                cout << descripciones_[i].getDescripcion() << endl;
            }cout << endl;
        }
    }while(selection != 3);

    return 0;
}
