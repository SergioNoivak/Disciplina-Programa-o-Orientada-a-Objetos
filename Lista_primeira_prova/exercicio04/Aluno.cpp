#include "Aluno.h"
#include<iostream>
#include<string>
using namespace std;


Aluno::Aluno()
{
}


Aluno::~Aluno()
{
}

double Aluno::get_n1() {
	return this->n1;
}
double Aluno::get_n2() {
	return this->n2;
}
void Aluno::set_n1(const double& novo_valor) {
	this->n1 = novo_valor;
}
void Aluno::set_n2(const double& novo_valor) {
	this->n2 = novo_valor;
}
void Aluno::set_nome(const string& nome) {
	this->nome = nome;
}

string Aluno::get_nome() {
	return this->nome;
}

//Essa classe contem também o método média que calcula a média aritmética das notas desse aluno
double Aluno::media() {
	return (this->n1 + this->n2) / 2.0;
}


