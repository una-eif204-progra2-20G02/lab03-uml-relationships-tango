#include "Puerta.h"

puerta::puerta() {
//	v = new ventana();
	
}

puerta::~puerta() 
{
	//delete v;
}
//Ventana* puerta::getVentana() { return v; }

/*void  puerta::setVentana(ventana* v) {
	delete v;
	this->v = v;
}
*/
bool puerta::getEstado() { return estado; }
void puerta::abrirPuerta() { estado = true; }
void puerta::cerrarPuerta() { estado = false; }
void puerta::abrirVentana() { v->abrir(); }
void puerta::cerrarVentana() { v->cerrar(); }
bool puerta::estadoVentana() { return v->getEstado(); }