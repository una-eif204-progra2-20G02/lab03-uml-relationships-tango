#include "Person.h"


Person::Person(string nombre, string apellido, int edad):nombre(nombre),apellido(apellido),edad(edad){}

string Person::getNombre(){
  return nombre;
}
string Person::getApellido(){
  return apellido;
}
int Person::getEdad(){
  return edad;
}

void Person::setNombre(string nombre){
  this->nombre = nombre;
}
void Person::setApellido(string apellido){
  this->apellido = apellido;
}
void Person::setEdad(int edad){
  this->edad = edad;
}



