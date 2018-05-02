#pragma once
using namespace std;
#include<iostream>

#ifndef CONTADOR_H
#define CONTADOR_H
class Contador
{
private:
	int numero;
	int quantidade_de_incrementos;


public:
	void somar_um();
	void desfazer_incremento();


	void set_numero(const int& numero);
	int get_numero();


	Contador(const int& numero_inicial);
	Contador();

	~Contador();
};

#endif

