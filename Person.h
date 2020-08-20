#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <sstream>
using namespace std;


class Person{
  protected:
    string nombre;
    string apellido;
    int edad;
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