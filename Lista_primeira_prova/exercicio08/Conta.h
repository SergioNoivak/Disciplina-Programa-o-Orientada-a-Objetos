

//Faça uma classe Conta em C++ que contenha o nome do cliente,
//o número da conta, o saldo e o limite como atributos.

#pragma once

#include<string.h>
#include<iostream>
using namespace std;
#ifndef CONTA_H
#define CONTA_H

class Conta
{
	/*
	
	.......nome do cliente,
	o número da conta, o saldo e o limite como atributos...
*/
private:
	string nome_do_cliente;
	double saldo;
	double limite;

public:



	void set_nome_do_cliente(string novo);
	void set_saldo(double novo);

	string get_nome_do_cliente();
	double get_saldo		  ();



/*
	O método set do limite deve controlar o 
	seu valor, sendo que o limite não poderá ser maior que o valor do 
	salário mensal do cliente.Esse salário será informado por parâmetro no método set,
	juntamente com o limite.*/
	double get_limite();
	void set_limite(double salario, double limite);

/*
	....Faca um método deposito e um método retira.
	O método retira ira devolver 1 ou 0, dependendo se o 
	cliente pode retirar(existe saldo ou limite)...
	
	.*/

	void deposito(double valor);
	int retira();


	Conta();
	~Conta();
};

#endif
