#include "Geral.h"
#include<iostream>
using namespace std;

Geral::Geral()
{
}
Geral::~Geral()
{
}
void Geral::creditar(double valor1, double valor2) {
	this->c1.CREDITO(valor1);
	this->c2.CREDITO(valor2);
}
void Geral::mostrar_saldo_final() {
	cout << this->c1.GET_SALDO() << " " << this->c2.GET_SALDO() << endl;
}