#include "Motor.h"

Motor::Motor() { estado = false;}


void Motor::arrancar() { estado = true; }

void Motor::parar() { estado = false;}

void Motor::setEstado(bool e) { estado = e; }

bool Motor::getEstado() { return estado; }

Motor::~Motor() {}