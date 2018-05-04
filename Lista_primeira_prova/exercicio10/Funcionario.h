#pragma once
#include<string>
#include<iostream>
#include<vector>
using namespace std;

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario
{
private:
	string nome;
	string telefone;
	double salario;
	string cpf;

public:
	virtual void imprimir();
	virtual string get_nome();
	virtual string get_telefone	();
	virtual double get_salario	();
	virtual string get_cpf		();

	virtual void set_nome(string  novo);
	virtual void  set_telefone(string novo);
	virtual void  set_salario(double novo);
	virtual void  set_cpf(string novo);


	Funcionario();
	~Funcionario();
};

#endif // !FUNCIONARIO_H

