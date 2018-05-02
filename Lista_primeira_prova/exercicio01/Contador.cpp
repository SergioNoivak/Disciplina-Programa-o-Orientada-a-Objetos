
#include "Contador.h"

void Contador::somar_um() {
	this->numero++;
	this->quantidade_de_incrementos++;
}
void Contador::desfazer_incremento() {
	if (this->quantidade_de_incrementos <= 0)
		return;
	this->quantidade_de_incrementos--;
	this->numero--;
}

Contador::Contador(const int& numero_inicial)
{
	this->numero = numero_inicial;
	quantidade_de_incrementos = 0;
}



void Contador::set_numero(const int& numero) {
	this->numero = numero;
}
int  Contador::get_numero() {
	return this->numero;

}



Contador::~Contador()
{
}
Contador::Contador()
{
	quantidade_de_incrementos = 0;

}
