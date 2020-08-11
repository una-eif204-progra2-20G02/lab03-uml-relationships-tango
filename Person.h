#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;


class Person{
  protected:
    string nombre;
    string apellido;
    id edad;
  public:
    Person(string, string, int);

    string getNombre();
    string getApellido();
    int getEdad();

    void setNombre(string);
    void setApellido(string);
    void setEdad(int);

    string toString();
};

#endif