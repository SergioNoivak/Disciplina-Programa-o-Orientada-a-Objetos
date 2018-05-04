#include "Time.h"

Time::Time()
{
}


Time::~Time()
{
}

string Time::get_nome() {
	return this->nome;
}
string Time::get_data_de_fundacao() {
	return this->data_de_fundacao;
}
string Time::get_estadio() {
	return this->estadio;
}

void Time::set_nome(string novo) {
	this->nome = novo;
}
void Time::set_data_de_fundacao(string novo) {
	this->data_de_fundacao = novo;
}
void Time::set_estadio(string	novo) {
	this->estadio = novo;
}
