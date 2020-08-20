
#include <iostream>
using namespace std;

class Ventana
{
private:
	bool polarizada;
	bool electrica;
	bool estado; // true abierto y false cerrado
public:
	Ventana();
	~Ventana();
	void abrir();
	void cerrar();
	bool getEstado();
	bool getPolarizada();
	void setPolarizada(bool);
	bool getElectrica();
	void setElectrica(bool);
};
