#pragma once
#ifndef RETANGULO_h
#define RETANGULO_h
#include<string.h>
#include<iostream>
using namespace std;

class Retangulo
{

private:
	double base;
	double altura;

public:
	double get_base	 ();
	double get_altura();

	void set_base  (const double& novo);
	void set_altura(const double &novo);

	//� Qual a �rea do ret�ngulo ? (Formula: base x altura)
	double area();
	//� Qual o per�metro do ret�ngulo?(Formula: 2 x base +2 x altura)
	double perimetro();
	//� Este ret�ngulo � quadrado ? Responde SIM ou N�O
	bool is_retangulo();

	Retangulo();
	~Retangulo();
};

#endif 
