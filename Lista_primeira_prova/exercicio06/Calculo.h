#pragma once

#ifndef CALCULO_H
#define CALCULO_H


//
//Implemente uma classe CALCULO que dever� ter apenas um atributo
//inteiro chamado SALDO
class Calculo
{
private:
	double SALDO;
public:

	//   ....classe conter� ainda tr�s m�todos p�blicos CREDITO, DEBITO e GETSALDO

	// ....O m�todo CREDITO quando chamado ir� somar o valor recebido como par�metro ao atributo SALDO
	void CREDITO(double valor_recebido_como_par�metro);

	/*
	.....o m�todo DEBITO ir� subtrair o valor recebido como par�metro do atributo SALDO.*/
	void DEBITO(double valor_recebido_como_par�metro);

	/*
	....J� o m�todo GET SALDO ir� apenas retornar o conte�do do atributo SALDO para a classe chamadora*/
	double GET_SALDO();


	Calculo();
	~Calculo();
};
#endif // !CALCULO_H


