#pragma once

#ifndef CALCULO_H
#define CALCULO_H


//
//Implemente uma classe CALCULO que deverá ter apenas um atributo
//inteiro chamado SALDO
class Calculo
{
private:
	double SALDO;
public:

	//   ....classe conterá ainda três métodos públicos CREDITO, DEBITO e GETSALDO

	// ....O método CREDITO quando chamado irá somar o valor recebido como parâmetro ao atributo SALDO
	void CREDITO(double valor_recebido_como_parâmetro);

	/*
	.....o método DEBITO irá subtrair o valor recebido como parâmetro do atributo SALDO.*/
	void DEBITO(double valor_recebido_como_parâmetro);

	/*
	....Já o método GET SALDO irá apenas retornar o conteúdo do atributo SALDO para a classe chamadora*/
	double GET_SALDO();


	Calculo();
	~Calculo();
};
#endif // !CALCULO_H


