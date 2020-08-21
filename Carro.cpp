/*
#include "Carro.h"


Carro::Carro(string placa) {
	this->placa = placa;
	this->litros = 0;
	//this->propi = NULL;

	m = new motor(); 
	vecPuerta = new Puerta*[4];
	vecLlanta = new Llanta*[4];

	for (int i = 0; i< 4; i++)
	{
		vecLlanta[i] = new Llanta();
		vecPuerta[i] = new Puerta();
	}
}

void Carro::setLitros(int x) { litros = x; };

int Carro::getLitros() { return litros; };

void Carro::setPlaca(string x) { placa = x; }

string Carro::getPlaca() { return placa; }

Motor* Carro::getMotor() { return m; }

void  Carro::setMotor(Motor* x) { m = x; }

Llanta* carro::getLlanta(int i) { return vecLlanta[i]; }

void carro::setLlanta(Llanta *r, int i) {
	delete vecLlanta[i]; // tambien se puede devolver para que otro la elimine
	vecRueda[i] = r;
}
puerta* carro::getPuerta(int i) { return vecPuerta[i]; }

void carro::setPuerta(puerta *p, int i) {
	delete vecPuerta[i];// tambien se puede devolver para que otro la elimine
	vecPuerta[i] = p;
}

propietario* carro::getPropietario() { return propi; }

void carro::setPropietario(propietario* x) { 
	
	propi = x;

}


void carro::encenderMotor() {
	m->arrancar();
}

void carro::abrirPuertas() {
	for (int i = 0; i < 4; i++)
	{
		vecPuerta[i]->abrirPuerta();
	}
}


void carro::abrirVentanas() {
	for (int i = 0; i < 4; i++)
	{
		vecPuerta[i]->abrirVentana();
	}
}


void carro::cambiarPresionRueda(int  num)
{
	for (int i = 0; i < 4; i++)
	{
		vecRueda[i]->setPresion(num);
	}

}


string carro::toString() {
	stringstream s;
	s << endl << "___Datos del carro___" << endl;
	s <<  "Placa: " << this->placa << endl;
	s << "Litros de gasolina: " << litros << endl;

	if (propi == NULL) {
		s << "Propietario: " << "SIN ASIGNAR" << endl;
	}
	else {
		s << "Propietario: " << propi->getNombre() << endl;
	}

	s << "Presion llanta 1: " << vecLlanta[0]->getPresion() << endl;
	s << "Presion llanta 2: " << vecLlanta[1]->getPresion() << endl;
	s << "Presion llanta 3: " << vecLlanta[2]->getPresion() << endl;
	s << "Presion llanta 4: " << vecLlanta[3]->getPresion() << endl;

	s << "Puerta 1 abierta: " << vecPuerta[0]->getEstado() << ", Ventana abierta: " << vecPuerta[0]->estadoVentana() << endl;
	s << "Puerta 2 abierta: " << vecPuerta[1]->getEstado() << ", Ventana abierta: " << vecPuerta[1]->estadoVentana() << endl;
	s << "Puerta 3 abierta: " << vecPuerta[2]->getEstado() << ", Ventana abierta: " << vecPuerta[2]->estadoVentana() << endl;
	s << "Puerta 4 abierta: " << vecPuerta[3]->getEstado() << ", Ventana abierta: " << vecPuerta[3]->estadoVentana() << endl << endl;


	return s.str();
}


carro::~carro() {
	delete m;
	for (int i = 0; i < 4; i++) {
		delete vecPuerta[i];
		delete vecLlanta[i];

	}
	delete[]vecPuerta;
	delete[]vecLlanta;
}
 */