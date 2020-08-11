#include "Person.h"

Person::Person(string nombre, string apellido, int edad):this->nombre(nombre),this->apellido(apellido),this->edad(edad){

}

string Person::getNombre(){
  return nombre;
}
string Person::getApellido(){
  return apellido;
}