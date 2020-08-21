//
// Created by Steph on 21/8/2020.
//

#ifndef LAB03_UML_RELATIONSHIPS_TANGO_CHOFER_H
#define LAB03_UML_RELATIONSHIPS_TANGO_CHOFER_H
#include <iostream>
using namespace std;
#include "Carro.h"
class Chofer: public Person{
private:
Carro* _carro;
public:
chofer();
chofer(string, string, int);


};


#endif //LAB03_UML_RELATIONSHIPS_TANGO_CHOFER_H
