#include "Funcionario.h"

Funcionario::Funcionario()
{

}
Funcionario::~Funcionario()
{

}

void Funcionario::imprimir() {

}

string Funcionario::get_nome() {
	return this->nome;
}
string Funcionario::get_telefone() {
	return this->telefone;
}
double Funcionario::get_salario() {
	return this->salario;
}
string Funcionario::get_cpf() {
	return this->cpf;
}
void   Funcionario::set_nome(string  novo) {
	this->nome = nome;

}
void   Funcionario::set_telefone(string novo) {
	this->telefone = novo;

}
void   Funcionario::set_salario(double novo) {
	this->salario = novo;
}
void   Funcionario::set_cpf(string novo) {

	this->cpf = novo;
}


