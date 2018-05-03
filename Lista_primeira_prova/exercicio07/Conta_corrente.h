#pragma once
#include<string.h>
#include<iostream>
using namespace std;
#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

/*
....Implementar uma classe Conta Corrente... */
class Conta_corrente
{

private:
	
	/*   ......que possua os seguintes atributos : nome_cliente, numero, senha e saldo....*/

	string nome_cliente;
	int numero	;
	string senha; 
	double saldo;

	/*
	...Possui ainda os m�todos cadastrar_senha
		que recebe uma senha como par�metro e altera o atributo senha...
*/
	void cadastrar_senha(const string &senha);

/*
	....e o m�todo alterar_senha que recebe como
	par�metro a senha antiga e a nova senha....*/

	void alterar_senha(const string &senha_antiga, const string &nova_senha);

/*
	...Os m�todos debitar e creditar tamb�m dever�o ser implementados...*/

	void debitar(const double& valor, const int& numero_da_conta, const string& senha);
	void creditar(const double& valor,const int &numero_da_conta, const string &senha);

public:
	Conta_corrente();
	~Conta_corrente();
};

#endif // !CONTA_CORRENTE_H


