//
// Created by Steph on 21/8/2020.
//

#include "Carro.h"
#include "Person.h"
#include<sstream>

using namespace std;

class Chofer:public Person{

private:
//Carro* _carro;

public:
Chofer(string, string, int);
virtual string toString();

};


