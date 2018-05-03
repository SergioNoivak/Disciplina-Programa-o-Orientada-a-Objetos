#include "Pessoa.h"



Pessoa::Pessoa()
{
}


Pessoa::~Pessoa()
{
}

//
//Respeite a regra do encapsulamento
void Pessoa::set_numero_de_contribuinte(const int& numero_de_contribuinte) {
	this->numero_de_contribuinte = numero_de_contribuinte;
}
void Pessoa::set_idade(const int& idade) {
	this->idade = idade;
}
void Pessoa::set_nome(const string& nome) {

	this->nome = nome;
}

int    Pessoa::get_numero_de_contribuinte() {
	return this->numero_de_contribuinte;
}
int  Pessoa::get_idade() {
	return this->idade;
}
string Pessoa::get_nome() {
	return this->nome;
}


void Pessoa::exibir() {
	cout << this->get_idade()				  <<endl;
	cout << this->get_nome()				  <<endl;
	cout << this->get_numero_de_contribuinte()<<endl;
}