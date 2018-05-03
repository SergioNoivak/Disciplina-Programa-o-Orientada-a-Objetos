//
//A classe GERAL dever� conter duas instancias objeto do tipo CALCULO.|

#include"Calculo.h"
#pragma once
#ifndef GERAL_H
#define GERAL_H

class Geral
{
	Calculo c1;
	Calculo c2;
public:

/*
	O usu�rio informar� o valor que dever� ser creditado inicialmente em 
	cada um dos objetos e depois informar� o valor que dever� ser debitado em 
	cada uma dos dois objetos.Depois o programa mostrar� o saldo final de cada
	uma das contas.

*/
	void creditar(double valor1, double valor2);
	void mostrar_saldo_final();
	
	Geral();
	~Geral();
};

#endif