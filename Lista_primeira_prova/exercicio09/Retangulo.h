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

	//• Qual a área do retângulo ? (Formula: base x altura)
	double area();
	//• Qual o perímetro do retângulo?(Formula: 2 x base +2 x altura)
	double perimetro();
	//• Este retângulo é quadrado ? Responde SIM ou NÃO
	bool is_retangulo();

	Retangulo();
	~Retangulo();
};

#endif 
