#include "Conta.h"



Conta::Conta()
{
}


Conta::~Conta()
{
}



void Conta::set_nome_do_cliente(string novo) {
	this->nome_do_cliente = novo;
}
void Conta::set_saldo(double novo) {
	this->saldo = saldo;
}

string Conta::get_nome_do_cliente(){
	return this->nome_do_cliente;
}
double Conta::get_saldo() {
	return this->saldo;
}
double Conta::get_limite() {
	return this->limite;
}
void Conta::set_limite(double salario, double limite) {
	if (limite > salario)
		return;
	this->limite = limite;

}

void Conta::deposito(double valor) {
	if (valor < 0)
		return;
	this->saldo += valor;

}
int Conta::retira() {
	if (saldo < 0)
		return 0;
	if (limite < 0)
		return 0;
	return 1;
}



