//
// Created by Steph on 21/8/2020.
//

#include "Chofer.h"

Chofer::Chofer(string nombre, string apellido, int edad): Person(nombre, apellido, edad) {}

string Chofer::toString()
{
    stringstream s;

    s<<"Nombre: "<<" "<<this->nombre<<endl;
    s<<"Edad: "<<this->edad<<endl;

    return s.str();
}
