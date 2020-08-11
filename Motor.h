#ifndef MOTOR_H
#define MOTOR_H
#include<iostream>

using namespace std;

class Motor
{
private:

	bool estado;
public:
	Motor();
	
	void arrancar();
	void parar();
	void setEstado(bool );
	bool getEstado();

  ~Motor();
};

#endif