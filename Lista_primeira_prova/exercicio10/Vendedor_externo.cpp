#include "Vendedor_externo.h"



Vendedor_externo::Vendedor_externo()
{
}


Vendedor_externo::~Vendedor_externo()
{
}

double Vendedor_externo::get_gasolina() {

	return this->gasolina;
}
double Vendedor_externo::get_comissao() {

	return this->comissao;

}
void   Vendedor_externo::set_gasolina(double valor) {
	this->gasolina = valor;
}

void   Vendedor_externo::set_comissao(double valor){
	this->comissao = valor;

}

double Vendedor_externo::get_salario() {
	return this->comissao + Funcionario::get_salario() + this->gasolina;

}

