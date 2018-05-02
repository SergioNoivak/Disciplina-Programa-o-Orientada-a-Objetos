#include "Simples_classe.h"
#include<iostream>
using namespace std;

Simples_classe::Simples_classe()
{
}

Simples_classe::~Simples_classe()
{
}

void Simples_classe::set_n1(const int & n1) {
	this->n1 = n1;

}
void Simples_classe::set_n2(const int & n2) {
	this->n2 = n2;

}
int  Simples_classe::get_n1() {
	return this->n1;
}
int  Simples_classe::get_n2() {
	return this->n2;
}
void Simples_classe::swap() {
	std::swap(this->n1, this->n2);
}