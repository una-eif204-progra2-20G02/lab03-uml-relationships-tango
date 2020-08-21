#include <iostream>
#include "Person.h"
using namespace std;

class Propietario: public Person {

private:
    Carro* _carro;

public:
    Propietario(string, string, int);
    ~Propietario();




};