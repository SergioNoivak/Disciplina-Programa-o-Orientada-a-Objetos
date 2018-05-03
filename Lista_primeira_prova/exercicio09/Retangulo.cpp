#include "Retangulo.h"
#include<string.h>
#include<iostream>
using namespace std;

Retangulo::Retangulo()
{
}


Retangulo::~Retangulo()
{
}


double Retangulo::get_base()  {
	return this->base;
}
double Retangulo::get_altura(){
	return this->altura;
}

void Retangulo::set_base(const double& novo)  {
	this->base = novo;
}
void Retangulo::set_altura(const double &novo){
	this->altura = novo;
}


//• Qual a área do retângulo ? (Formula: base x altura)
double Retangulo::area() {
	return (this->base>0&& this->altura>0)? (this->base*this->altura):0;

}
//• Qual o perímetro do retângulo?(Formula: 2 x base +2 x altura)
double Retangulo::perimetro() {

	return (this->base>0 && this->altura>0) ? (2*this->base+ 2*this->altura) : 0;
}
//• Este retângulo é quadrado ? Responde SIM ou NÃO
bool Retangulo::is_retangulo() {
	return (this->altura == this->base);
}
