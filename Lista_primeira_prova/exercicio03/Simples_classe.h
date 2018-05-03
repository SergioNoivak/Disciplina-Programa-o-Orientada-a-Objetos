#pragma once
#ifndef SIMPLES_CLASSE_H
#define SIMPLES_CLASSE_H

class Simples_classe
{
private:
	/*
	Tenha dois atributos :
	um que represente o valor do salário mínimo e 
	outro que represente a quantidade de quilowatts
	gasta por uma residência;*/

	double valor_do_salario_minimo;
	double quantidade_de_quilowatts;


public:
	double get_valor_do_salario_minimo() ;
	double get_quantidade_de_quilowatts();
	void   set_valor_do_salario_minimo(double valor_do_salario_minimo);
	void   set_quantidade_de_quilowatts(double quantidade_de_quilowatts);
	double retorna_em_reais_o_valor_de_cada_quilowatt();
	double valor_em_reais_que_a_residencia_tera_que_pagar();
	double valor_em_reais_que_a_residencia_tera_que_pagar_com_desconto();



	Simples_classe();
	~Simples_classe();
};

#endif // !SIMPLES_CLASSE_H


