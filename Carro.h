/*

#include "Llanta.h"
#include "Puerta.h"
#include "Ventana.h"
#include<sstream> 
#include <string>

using namespace std;

class Carro
{
private:
	int litros;
	string placa;
	//Propietario* propi;
	Motor* m;
	Puerta** vecPuerta;
	Llanta** vecLlanta;

public:
	Carro(string);
	~Carro();
	void setLitros(int );
	int getLitros();
	void setPlaca(string );
	string getPlaca();
	Motor* getMotor();
	void  setMotor(Motor* );
	Llanta* getLlanta(int);
	void setLlanta(Llanta *, int );
	Puerta* getPuerta(int );
	void setPuerta(puerta *, int );
	//Propietario* getPropietario();
	//void setPropietario(propietario* );
	void encenderMotor();
	void abrirPuertas();
	void abrirVentanas();
	void cambiarPresionRueda(int);
	string toString();

};
 */